import cv2
import zmq

# Initialize ZeroMQ Context and PUB socket
context = zmq.Context()
footage_socket = context.socket(zmq.PUB)

# Ensure proper cleanup on exit
footage_socket.setsockopt(zmq.LINGER, 0)

# Bind PUB socket to port 5555
footage_socket.bind("tcp://*:5555")

# Initialize camera
camera = cv2.VideoCapture(0)
camera.set(cv2.CAP_PROP_FRAME_WIDTH, 1920)
camera.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)

try:
    while True:
        # Capture frame
        grabbed, frame = camera.read()
        
        # Skip if no frame is captured
        if not grabbed:
            continue
        
        # Encode frame as JPEG
        _, buffer = cv2.imencode(".jpg", frame)

        # Send frame as binary data
        footage_socket.send(buffer, zmq.NOBLOCK)  # Non-blocking send

finally:
    camera.release()
    footage_socket.close()
    context.term()


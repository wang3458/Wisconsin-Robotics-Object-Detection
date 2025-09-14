import os
import shutil
import random

# Define paths
images_folder = "images"  # Folder containing image files (.jpg, .JPG)
labels_folder = "labels"  # Folder containing label files (.txt)

# Create output folders
output_folders = ["train_images", "train_labels", "valid_images", "valid_labels"]
for folder in output_folders:
    os.makedirs(folder, exist_ok=True)

# Get all image files (handling both .jpg and .JPG extensions)
image_files = sorted([f for f in os.listdir(images_folder) if f.lower().endswith(".jpg")])

# Shuffle and split
random.seed(42)  # Set seed for reproducibility
random.shuffle(image_files)

total_images = len(image_files)
valid_split = int(total_images * 0.15)

valid_files = image_files[:valid_split]
train_files = image_files[valid_split:]

# Function to move files
def move_files(files, dest_images_folder, dest_labels_folder):
    for file in files:
        # Move the image
        shutil.copy(os.path.join(images_folder, file), os.path.join(dest_images_folder, file))
        # Move the corresponding label
        label_file = os.path.splitext(file)[0] + ".txt"
        shutil.copy(os.path.join(labels_folder, label_file), os.path.join(dest_labels_folder, label_file))

# Move files to respective folders
move_files(valid_files, "valid_images", "valid_labels")
move_files(train_files, "train_images", "train_labels")


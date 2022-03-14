#!/usr/bin/env python3
from PIL import Image
import os


img_size =(128,128)

for img in os.listdir():
    img_new = os.path.splitext(img)[0]
    try:
        with Image.open(img).convert('RGB') as img_repair:
            img_repair.thumbnail(img_size)
            img_repair.rotate(270).save("/opt/icons/" + img_new,"JPEG")
    except OSError:
        pass

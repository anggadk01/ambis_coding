sudo apt-get update
sudo apt install python-django-common
sudo systemctl start google-startup-scripts.service

#! /usr/bin/env python3
import os
import requests

file_path ="/data/feedback/"
keys_content =["title","name","date","feedback"]

folder = os. listdir (file_path)
for file_in in folder:
    keys_count = 0
    feedback = {}
    with open (file_path + file_in) as i:
        for line in i:
            values = line.strip()
            feedback[keys_content [keys_count]] = values
            keys_count += 1
    print (feedback)
    resp = requests.post("http://kosong/feedback/", json=feedback)

print (resp.request.body)
print (resp.status_code)

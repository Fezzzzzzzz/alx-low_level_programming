#!/bin/bash
echo Description:
read commit 
git add .
git commit -m "$commit"
git push


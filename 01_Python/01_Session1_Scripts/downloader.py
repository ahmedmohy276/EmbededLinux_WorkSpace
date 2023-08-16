# pip install pytube
from pytube import YouTube
YouTube('https://www.youtube.com/watch?v=WHTjqH1L7_c&list=PLkH1REggdbJojAFRPJbq4nXKLTnytNzw2&index=1&t=16s')\
    .streams.filter(progressive=True, file_extension='mp4').first().download()

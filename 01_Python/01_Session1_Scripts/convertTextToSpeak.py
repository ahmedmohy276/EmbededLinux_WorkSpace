# pip install gTTS
# pip install  python-vlc
from gtts import gTTS
import vlc
myobj = gTTS(text='صباح الفل يا كبير', lang='ar', slow=True)
# Saving the converted audio in a mp3 file named
myobj.save("welcome.mp4")
# Playing the converted file
p = vlc.MediaPlayer("./welcome.mp4")
p.play()
while True:
    pass

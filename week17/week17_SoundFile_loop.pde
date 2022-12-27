import processing.sound.*;
SoundFile file;
void setup()
{
  size(400,400);
  file = new SoundFile(this,"beat.aiff");
  file.loop();//無線播放
}
void draw()
{
  
}

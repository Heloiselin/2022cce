//File-Preference, Font:36
size(400,400);//大小
fill(255,0,0);//Red 填充顏色
noStroke();//不要畫外框顏色
//ellipse(50,50,100,100); //把實驗的圓刪掉
for(int y=0; y<400; y++){
  for(int x=0; x<400; x++){
    float x2 = (x-200)/100.0;
    float y2 = (200-y)/100.0;
    float left = x2*x2 + y2*y2 - 1;
    if(left*left*left - x2*x2*y2*y2*y2 <0){
      ellipse(x,y,2,2);
    }
  }
}

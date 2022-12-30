PImage img,img2,imgBG;

void setup(){
  size(400,400);
  img = loadImage("astro.png");
  img2 = loadImage("image2.png");
  imgBG = loadImage("BG.png");
}
void draw(){
  imageMode(CENTER);
  image(imgBG,300,300,800,800);
  image(img,mouseX,mouseY);
  image(img2,100,100);
}

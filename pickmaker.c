#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>



int main(){
  int fd, r, g, b, r2, b2, g2, r3, b3, g3, i, j, counter;
  char line[30];
  srand(time(NULL));

  fd = open("image.ppm", O_CREAT | O_TRUNC | O_WRONLY, 0644);
  snprintf(line, sizeof(line), "P3 500 500 255\n");
  counter = 0;
  b = 0;
  r = 0;
  g = 0;
  b2 = 255;
  r2 = 255;
  g2 = 255;


  write( fd, line, strlen(line));
  for (i =0; i <500; i++){
    for (j=0; j <500; j++){
      if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 10){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 20){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 30){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 40){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 50){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 60){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 70){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 80){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 90){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 100){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 110){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 120){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 130){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 140){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 150){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 160){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 170){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 180){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 190){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 200){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 210){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 220){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 230){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 240){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 250){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 260){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 270){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 280){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 290){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 300){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 220){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((j - 250),2)-pow((i - 250), 2))) == 220){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 10){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 20){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 30){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 40){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 50){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 60){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 70){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 80){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 90){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 100){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 110){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 120){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 130){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 140){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 150){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 160){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 170){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 180){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 190){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 200){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 210){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 220){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 230){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 240){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if((int)(sqrt(pow((i - 250),2)-pow((j - 250), 2))) == 250){
        snprintf(line, sizeof(line), "%d %d %d \n", 0, 0, 0);
        write(fd, line, strlen(line));
      }
      else if( counter % 3  == 0){

        b3 = rand()%255;
        r3 = rand()%255;
        g3 = rand()%255;

          snprintf(line, sizeof(line), "%d %d %d \n", r3, g3, b3);
          write(fd, line, strlen(line));
          counter++;
        }
      else if( counter % 2  == 0){

        if (r < 255){
          r++;
        }
        else{
          r = 0;
        }
        if (g < 255){
            g++;
          }
          else{
            g = 0;
          }
          if (b == 0){
            b = 255;
          }
          else{
            b--;
          }

          snprintf(line, sizeof(line), "%d %d %d \n", r, g, b);
          write(fd, line, strlen(line));
          counter++;
        }
        else{
          if (r2 == 0){
            r2 = 255;
          }
          else{
            r2--;
          }
          if (g2 == 0){
              g2 = 255;
            }
            else{
              g2--;
            }
            if (b2 == 0){
              b2 = 255;
            }
            else{
              b2 --;
            }

            snprintf(line, sizeof(line), "%d %d %d \n", r2, g2, b2);
            write(fd, line, strlen(line));
            counter++;
          }
        }

  }
}


#include<stdio.h>
#include<stdlib.h>
struct Frame {
    int seq;
    char data[20];
};

int main(){
int n,i ,j;
printf("Enter the Number of the frames:");
scanf("%d",&n);
struct Frame frames[n];

// Input random orderd 
printf("Entee the Seq And Data each of the frames:");
for(int i=0;i<n;i++){
    printf("Frame %d",i+1);
    scanf("%d %s",&frames[i].seq, frames[i].data);

}

// Sorting  bubble sort 
for(i=0;i<n-1;i++){
  for(j=0;j<n-i-1;j++){
    if(frames[j].seq>frames[j+1].seq) {
//    swap
      struct Frame temp=frames[j];
      frames[j] = frames[j+1];
      frames[j+1] = temp;
    }
  }
}

// Print 
  printf("\nFrames after sorting (by sequence):\n");
    for (i = 0; i < n; i++) {
        printf("Seq: %d, Data: %s\n", frames[i].seq, frames[i].data);
    }
return 0;
}

// Enter the Number of the frames:4
// Enter  the Seq And Data each of the frames:Frame 1 3 Hello
// Frame 2 1 World
// Frame 3 4 Data
// Frame 4 2 Link

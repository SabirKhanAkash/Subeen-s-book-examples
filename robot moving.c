#include<stdio.h>
int main()
{
    int x,y;
    char ch;
    printf("Enter the initial position: \n");
    scanf("%d%d",&x,&y);
    printf("Enter the move L(Left),R(Right),Up(Up),D(Down): \n");
    while (1) {
        scanf("%c", &ch);
        if (ch == 'S' || ch == 's') {
            break;
        }
        else if (ch == 'U'|| ch == 'u' ) {
            x--;
        }
        else if (ch == 'D' || ch == 'd') {
            x++;
        }
        else if (ch == 'R' || ch == 'r') {
            y++;
        }
        else if (ch == 'L'|| ch == 'l') {
            y--;
            }
        }
    printf("After the moves the position of the robot is: ( %d , %d )\n",x,y);

    return 0;
}

#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int x[4], y[4], i;
    double put_x, put_y, t;
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, "..\\BGI");
    printf("\n*** Bezier Curve ****");
    printf("\n Please enter x and y coordinates ");

    for (i = 0; i < 4; i++) {
        scanf("%d %d", &x[i], &y[i]);
        putpixel(x[i], y[i], 3);  // Control Points
    }

    for (t = 0.0; t <= 1.0; t += 0.001) {
        // Formula to draw curve
        put_x = pow(1 - t, 3) * x[0] + 3 * t * pow(1 - t, 2) * x[1] + 3 * t * t * (1 - t) * x[2] + pow(t, 3) * x[3];
        put_y = pow(1 - t, 3) * y[0] + 3 * t * pow(1 - t, 2) * y[1] + 3 * t * t * (1 - t) * y[2] + pow(t, 3) * y[3];
        
        putpixel((int)put_x, (int)put_y, WHITE);  // Convert to integer and put pixel
    }

    getch();
    closegraph();
    return 0;
}

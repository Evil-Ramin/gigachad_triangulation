#include <stdio.h>
#include <math.h>

int main(){

    printf("Copyright (c) 2024, EvilRamin\n");
    printf("MIT license: https://mit-license.org/\n");
    printf("Gigachad triangulation\n");
    printf("(for when u wanna minimize ender pearl throws in Minecraft!)\n");
    printf("Use reasonable inputs or expect unexpected behavior\n");
    printf("remember, garbage in = garbage out, so always enter accurate data\n\n");

    float x1, z1, x2, z2, a1, a2, x3, z3, s1, s2, c1, c2;

    printf("Enter your current X coordinate: ");
    scanf("%f", &x1);
    printf("Enter your current Z coordinate: ");
    scanf("%f", &z1);
    printf("Throw a pearl and enter its angle in degrees: ");
    scanf("%f", &a1);

    printf("Move to another location, preferably perpendicular to where the pearl went, and the further the better, once that's done,\n");
    printf("Enter your new X coordinate: ");
    scanf("%f", &x2);
    printf("Enter your new Z coordinate: ");
    scanf("%f", &z2);
    printf("Throw another pearl and enter its angle in degrees: ");
    scanf("%f", &a2);

    s1 = tan((-a1)*(M_PI/180));
    s2 = tan((-a2)*(M_PI/180));

    c1 = x1 - (s1 * z1);
    c2 = x2 - (s2 * z2);

    x3 = ((c1*s2)-(c2*s1))/(s2-s1);
    z3 = (x3-c1)/s1;

    printf("\nThe estimated stronghold coordinates are: X=%f and Z=%f\n", x3, z3);
    printf("Press enter to quit...");
    getchar();
    getchar();

    return 0;

}

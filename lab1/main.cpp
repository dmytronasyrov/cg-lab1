//
//  main.cpp
//  lab1
//
//  Created by Dmytro Nasyrov on 05.05.2021.
//

#include <GL/glew.h>
#include <GLFW/glfw3.h>

void drawControlPoints(GLfloat ctlPoints[4][3]) {
    glColor3f(0, 0.75, 0);
    glBegin(GL_POINTS);
    
    for (int i = 0; i < 4; i++)
        glVertex2f(ctlPoints[i][0], ctlPoints[i][1]);
    
    glEnd();
}

void drawPointConnections(GLfloat ctlPoints[4][3]) {
    glColor3f(0, 0.5, 0);
    glBegin(GL_LINES);
    
    glVertex2f(ctlPoints[0][0], ctlPoints[0][1]);
    glVertex2f(ctlPoints[1][0], ctlPoints[1][1]);
    glVertex2f(ctlPoints[1][0], ctlPoints[1][1]);
    glVertex2f(ctlPoints[2][0], ctlPoints[2][1]);
    glVertex2f(ctlPoints[2][0], ctlPoints[2][1]);
    glVertex2f(ctlPoints[3][0], ctlPoints[3][1]);
    
    glEnd();
}

void drawNurbs(GLfloat ctlPoints[4][3], GLfloat knots[8]) {
    glColor3f(1, 1, 1);
    GLUnurbsObj *theNurb = gluNewNurbsRenderer();
    gluBeginCurve(theNurb);
    gluNurbsCurve(theNurb, 8, knots, 3, &ctlPoints[0][0], 4, GL_MAP1_VERTEX_3);
    gluEndCurve(theNurb);
}

void drawCurve(GLfloat ctlPoints[4][3], GLfloat knots[8]) {
    drawControlPoints(ctlPoints);
    drawPointConnections(ctlPoints);
    drawNurbs(ctlPoints, knots);
}

void renderLoop(GLFWwindow *window) {
    GLfloat knots[8] = {0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0};
    
    GLfloat ctlPoints1[4][3] = {
        {0.2, 0.6, 0.0},
        {0.3, 0.6, 0.0},
        {0.45, 0.8, 0.0},
        {0.6, 0.7, 0.0}
    };
    
    GLfloat ctlPoints2[4][3] = {
        {0.6, 0.7, 0.0},
        {0.57, 0.8, 0.0},
        {0.57, 0.9, 0.0},
        {0.58, 0.95, 0.0}
    };
    
    GLfloat ctlPoints3[4][3] = {
        {0.58, 0.95, 0.0},
        {0.60, 0.96, 0.0},
        {0.62, 0.96, 0.0},
        {0.64, 0.94, 0.0}
    };
    
    GLfloat ctlPoints4[4][3] = {
        {0.64, 0.94, 0.0},
        {0.642, 0.97, 0.0},
        {0.648, 0.95, 0.0},
        {0.65, 0.92, 0.0}
    };
    
    GLfloat ctlPoints5[4][3] = {
        {0.65, 0.92, 0.0},
        {0.66, 0.92, 0.0},
        {0.67, 0.91, 0.0},
        {0.68, 0.89, 0.0}
    };
    
    GLfloat ctlPoints6[4][3] = {
        {0.68, 0.89, 0.0},
        {0.64, 0.90, 0.0},
        {0.62, 0.90, 0.0},
        {0.61, 0.89, 0.0}
    };
    
    GLfloat ctlPoints7[4][3] = {
        {0.61, 0.89, 0.0},
        {0.60, 0.8, 0.0},
        {0.65, 0.7, 0.0},
        {0.7, 0.65, 0.0}
    };
    
    GLfloat ctlPoints8[4][3] = {
        {0.7, 0.65, 0.0},
        {0.73, 0.58, 0.0},
        {0.73, 0.53, 0.0},
        {0.7, 0.5, 0.0}
    };
    
    GLfloat ctlPoints9[4][3] = {
        {0.7, 0.5, 0.0},
        {0.68, 0.48, 0.0},
        {0.65, 0.44, 0.0},
        {0.65, 0.47, 0.0}
    };
    
    GLfloat ctlPoints10[4][3] = {
        {0.65, 0.47, 0.0},
        {0.63, 0.45, 0.0},
        {0.61, 0.445, 0.0},
        {0.6, 0.46, 0.0}
    };
    
    GLfloat ctlPoints11[4][3] = {
        {0.6, 0.46, 0.0},
        {0.56, 0.43, 0.0},
        {0.54, 0.43, 0.0},
        {0.53, 0.44, 0.0}
    };
    
    GLfloat ctlPoints12[4][3] = {
        {0.53, 0.44, 0.0},
        {0.51, 0.41, 0.0},
        {0.49, 0.41, 0.0},
        {0.47, 0.43, 0.0}
    };
    
    GLfloat ctlPoints13[4][3] = {
        {0.47, 0.43, 0.0},
        {0.465, 0.42, 0.0},
        {0.445, 0.42, 0.0},
        {0.44, 0.43, 0.0}
    };
    
    GLfloat ctlPoints14[4][3] = {
        {0.44, 0.43, 0.0},
        {0.42, 0.41, 0.0},
        {0.40, 0.41, 0.0},
        {0.38, 0.44, 0.0}
    };
    
    GLfloat ctlPoints15[4][3] = {
        {0.38, 0.44, 0.0},
        {0.36, 0.43, 0.0},
        {0.34, 0.43, 0.0},
        {0.32, 0.46, 0.0}
    };
    
    GLfloat ctlPoints16[4][3] = {
        {0.32, 0.46, 0.0},
        {0.31, 0.45, 0.0},
        {0.29, 0.45, 0.0},
        {0.28, 0.46, 0.0}
    };
    
    GLfloat ctlPoints17[4][3] = {
        {0.28, 0.46, 0.0},
        {0.27, 0.46, 0.0},
        {0.26, 0.46, 0.0},
        {0.25, 0.46, 0.0}
    };
    
    GLfloat ctlPoints18[4][3] = {
        {0.25, 0.46, 0.0},
        {0.21, 0.48, 0.0},
        {0.20, 0.50, 0.0},
        {0.20, 0.51, 0.0}
    };
    
    GLfloat ctlPoints19[4][3] = {
        {0.20, 0.51, 0.0},
        {0.18, 0.53, 0.0},
        {0.17, 0.54, 0.0},
        {0.19, 0.55, 0.0}
    };
    
    GLfloat ctlPoints20[4][3] = {
        {0.19, 0.55, 0.0},
        {0.17, 0.65, 0.0},
        {0.18, 0.63, 0.0},
        {0.2, 0.6, 0.0}
    };
    
    glClear(GL_COLOR_BUFFER_BIT);
    
    drawCurve(ctlPoints1, knots);
    drawCurve(ctlPoints2, knots);
    drawCurve(ctlPoints3, knots);
    drawCurve(ctlPoints4, knots);
    drawCurve(ctlPoints5, knots);
    drawCurve(ctlPoints6, knots);
    drawCurve(ctlPoints7, knots);
    drawCurve(ctlPoints8, knots);
    drawCurve(ctlPoints9, knots);
    drawCurve(ctlPoints10, knots);
    drawCurve(ctlPoints11, knots);
    drawCurve(ctlPoints12, knots);
    drawCurve(ctlPoints13, knots);
    drawCurve(ctlPoints14, knots);
    drawCurve(ctlPoints15, knots);
    drawCurve(ctlPoints16, knots);
    drawCurve(ctlPoints17, knots);
    drawCurve(ctlPoints18, knots);
    drawCurve(ctlPoints19, knots);
    drawCurve(ctlPoints20, knots);

    glfwSwapBuffers(window);
    glfwPollEvents();
}

int main(int argc, const char *argv[]) {
    GLFWwindow *window;
    
    if (!glfwInit()) return -1;
    
    window = glfwCreateWindow(640, 480, "Lab 1", NULL, NULL);
    
    if (!window) {
        glfwTerminate();
        
        return -1;
    }
    
    glfwMakeContextCurrent(window);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1, 0, 1, 0, 1);
    glPointSize(10.0);
    
    while (!glfwWindowShouldClose(window))
        renderLoop(window);
    
    glfwTerminate();
    
    return 0;
}

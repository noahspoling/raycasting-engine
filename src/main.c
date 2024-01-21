#include <stdio.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "tile.h"
#include "player.h"
#include "position.h"
#include "game_state.h"


#define ROWS 11
#define COLS 11

#define WIN_WIDTH 1200
#define WIN_HEIGHT 600

int grid[ROWS][COLS] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1},
        {1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

// bool ifWall(int x, int y) {
//     if(grid())
// }

//Functions

// void display() {

// }

void processInput(GLFWwindow *window, struct GameState *gameState) {

    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        playerMove(&gameState); // Assuming this moves the player left
    }
    // Move player up
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        playerMove(&gameState); // Assuming this moves the player up
    }

    // Move player down
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
        playerMove(&gameState); // Assuming this moves the player down
    }

    // Move player left
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        playerMove(&gameState); // Assuming this moves the player left
    }

    // Move player right
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
        playerMove(&gameState); // Assuming this moves the player right
    }

    // Other key bindings...
}

int main() {
    // printf("Hello, OpenGL World!\n");

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    

    GLFWwindow* window = glfwCreateWindow(WIN_WIDTH, WIN_HEIGHT, "Labyrinth", NULL, NULL);

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        printf("Failed to initialize GLAD");
        return -1;
    }    

    if (window == NULL)
    {
        printf("Failed to create GLFW window");
        glfwTerminate();
        return -1;
    }


    glViewport(0, 0, WIN_WIDTH, WIN_HEIGHT);
    
    // Render loop
    while (!glfwWindowShouldClose(window)) {

        // switch (expression)
        // {
        // case /* constant-expression */:
        //     /* code */
        //     break;
        
        // default:
        //     break;
        // }

        // Input
        // Check if the Escape key was pressed
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GLFW_TRUE);
        }

        // Render

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

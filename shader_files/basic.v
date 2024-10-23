#version 400 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNor;
layout (location = 2) in vec2 aTexCoord;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

out vec2 TexCoord;
out vec3 vNor;

void main()
{
   gl_Position = projection * view * model * vec4(aPos, 1.0);
   vNor = vec3(aNor.x, aNor.y, aNor.z);
   TexCoord = aTexCoord;
}

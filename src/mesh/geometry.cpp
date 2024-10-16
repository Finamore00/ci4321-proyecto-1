#include "geometry.hpp"

Geometry createPlane(float x, float z)
{
    float halfX = x / 2.0f;
    float halfZ = z / 2.0f;
    Geometry plane = {};
    plane.vertices = {
        {{-halfX, 0.0f, -halfZ}, {0.0f, 1.0f, 0.0f}, {0.0f, 1.0f}},
        {{-halfX, 0.0f, halfZ}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f}},
        {{halfX, 0.0f, -halfZ}, {0.0f, 1.0f, 0.0f}, {1.0f, 1.0f}},
        {{halfX, 0.0f, halfZ}, {0.0f, 1.0f, 0.0f}, {1.0f, 0.0f}}
    };

    plane.indices = {
        0, 1, 2,
        2, 1, 3,
    };

    return plane;
}

Geometry createBox(float width, float height)
{
    float halfW = width / 2.0f;
    float halfH = height / 2.0f;
    Geometry box = {};
    box.vertices = {
        {{-halfW, halfH, halfW}, {0.0f, 0.0f, -1.0f}, {0.0f, 1.0f}},
        {{-halfW, -halfH, halfW}, {0.0f, 0.0f, -1.0f}, {0.0f, 0.0f}},
        {{halfW, halfH, halfW}, {0.0f, 0.0f, -1.0f}, {1.0f, 1.0f}},
        {{halfW, -halfH, halfW}, {0.0f, 0.0f, -1.0f}, {1.0f, 0.0f}},

        {{halfW, halfH, halfW}, {1.0f, 0.0f, 0.0f}, {0.0f, 1.0f}},
        {{halfW, -halfH, halfW}, {1.0f, 0.0f, 0.0f}, {0.0f, 0.0f}},
        {{halfW, halfH, -halfW}, {1.0f, 0.0f, 0.0f}, {1.0f, 1.0f}},
        {{halfW, -halfH, -halfW}, {1.0f, 0.0f, 0.0f}, {1.0f, 0.0f}},

        {{halfW, halfH, -halfW}, {0.0f, 0.0f, 1.0f}, {0.0f, 1.0f}},
        {{halfW, -halfH, -halfW}, {0.0f, 0.0f, 1.0f}, {0.0f, 0.0f}},
        {{-halfW, halfH, -halfW}, {0.0f, 0.0f, 1.0f}, {1.0f, 1.0f}},
        {{-halfW, -halfH, -halfW}, {0.0f, 0.0f, 1.0f}, {1.0f, 0.0f}},

        {{-halfW, halfH, -halfW}, {-1.0f, 0.0f, 0.0f}, {0.0f, 1.0f}},
        {{-halfW, -halfH, -halfW}, {-1.0f, 0.0f, 0.0f}, {0.0f, 0.0f}},
        {{-halfW, halfH, halfW}, {-1.0f, 0.0f, 0.0f}, {1.0f, 1.0f}},
        {{-halfW, -halfH, halfW}, {-1.0f, 0.0f, 0.0f}, {1.0f, 0.0f}},

        {{-halfW, halfH, -halfW}, {0.0f, 1.0f, 0.0f}, {0.0f, 1.0f}},
        {{-halfW, halfH, halfW}, {0.0f, 1.0f, 0.0f}, {0.0f, 0.0f}},
        {{halfW, halfH, -halfW}, {0.0f, 1.0f, 0.0f}, {1.0f, 1.0f}},
        {{halfW, halfH, halfW}, {0.0f, 1.0f, 0.0f}, {1.0f, 0.0f}},

        {{-halfW, -halfH, -halfW}, {0.0f, -1.0f, 0.0f}, {0.0f, 1.0f}},
        {{-halfW, -halfH, halfW}, {0.0f, -1.0f, 0.0f}, {0.0f, 0.0f}},
        {{halfW, -halfH, -halfW}, {0.0f, -1.0f, 0.0f}, {1.0f, 1.0f}},
        {{halfW, -halfH, halfW}, {0.0f, -1.0f, 0.0f}, {1.0f, 0.0f}}

    };

    box.indices = {
        0, 1, 2,
        2, 1, 3,

        4, 5, 6,
        6, 5, 7,

        8, 9, 10,
        10, 9, 11,

        12, 13, 14,
        14, 13, 15,

        16, 17, 18,
        18, 17, 19,

        22, 21, 20,
        23, 21, 22
    };

    return box;
}

Geometry createSphere(unsigned int segments, unsigned int arcs, float radius)
{
    return {};
}

Geometry createCylinder(unsigned int segments, float radius, float height)
{
    return {};
}
#pragma once
#include <vector>

#include "../../thirdparty/glm/glm.hpp"
#include "../../thirdparty/glm/gtc/quaternion.hpp"

class SceneObject;

class Transform
{
protected:
    glm::vec3 m_position = {0.0f, 0.0f, 0.0f};
    glm::vec3 m_scale = {1.0f, 1.0f, 1.0f};
    glm::quat m_rotation = glm::quat(glm::vec3(0.0f));

    glm::mat4 m_modelMatrix = glm::mat4(1.0f);
    bool m_isDirty = true;

    std::vector<Transform*> children;
    Transform* parent = nullptr;
    SceneObject& sceneObject;

    glm::mat4 getLocalModelMatrix();
    void computeModelMatrix();
    void computeModelMatrix(const glm::mat4& parentGlobalModelMat);

public:
    bool isDirty() const {return m_isDirty;}
    const glm::mat4& getModelMatrix() const {return m_modelMatrix;}

    const glm::vec3& getLocalScale() {return m_position;}
    const glm::vec3& getLocalPosition() {return m_position;}
    const glm::quat& getLocalRotation() {return m_rotation;}
    glm::vec3 getLocalEulerRotation() {return glm::eulerAngles(m_rotation);}

    glm::vec3 getUpVector();
    glm::vec3 getRightVector();
    glm::vec3 getFrontVector();

    void setLocalPosition(const glm::vec3& position);
    void setLocalRotation(const glm::quat& rot);
    void setLocalEulerRotation(const glm::vec3& euler);
    void setLocalScale(const glm::vec3& scale);

    glm::vec3 getWorldPosition();
    glm::quat getWorldRotation();
    glm::vec3 getWorldEulerRotation();
    glm::vec3 getWorldScale();
    
    void setWorldPosition(const glm::vec3& position);
    void setWorldRotation(const glm::quat& rot);
    void setWorldEulerRotation(const glm::vec3& euler);
    void setWorldScale(const glm::vec3& scale);

    void setParent(Transform* const parent, bool keepWorld);
    void removeChild(Transform& child);

    void forceUpdateTransform();
    void updateTransform();

    Transform(SceneObject &obj);
};

class SceneObject
{
public:
    Transform transform = Transform(*this);
};
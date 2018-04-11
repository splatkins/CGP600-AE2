#pragma once

class Camera
{
private:
	float m_x, m_y, m_z, m_dx, m_dz, m_camera_rotation;
	XMVECTOR m_position, m_lookat, m_up;

public:
	void Rotate(float rotationDegrees);
	void Forward(float forwardDistance);
	XMMATRIX GetViewMatrix();

	// constructor
	Camera(float initialX, float initialY, float initialZ, float initialRotation)
	{
		m_x = initialX;
		m_y = initialY;
		m_z = initialZ;
		m_camera_rotation = initialRotation;

		m_dx = sin(m_camera_rotation * (XM_PI / 180.0));
		m_dz = cos(m_camera_rotation * (XM_PI / 180.0));

	}
};
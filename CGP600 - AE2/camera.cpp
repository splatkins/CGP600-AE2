#define _XM_NO_INTRINSICS_
#define XM_NO_ALIGNMENT

#include <d3d11.h>
#include <xnamath.h>
#include <math.h>
#include "camera.h"

void Camera::Rotate(float rotationDegrees)
{
	m_camera_rotation += rotationDegrees;

	m_dx = sin(m_camera_rotation * (XM_PI / 180.0));
	m_dz = cos(m_camera_rotation * (XM_PI / 180.0));
}

void Camera::Forward(float forwardDistance)
{
	m_x = m_dx * forwardDistance;
	m_z = m_dz * forwardDistance;
}

XMMATRIX Camera::GetViewMatrix()
{
	/*m_position = XMVectorSet(m_x, m_y, m_z, 0.0);
	m_lookat = XMVectorSet(m_x + m_dx, m_y, m_z + m_dz, 0.0);
	m_up = XMVectorSet(0.0, 1.0, 0.0, 0.0);*/

	//XMMATRIX viewMatrix = XMMatrixLookAtLH(m_position, m_lookat, m_up);
	XMMATRIX viewMatrix = XMMatrixIdentity();
	return viewMatrix;
}
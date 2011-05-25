#include "SpatialComponent.h"

SpatialComponent::SpatialComponent(const Vector2f& position, const float rotation, const Vector2f& scale)
{
	SetPosition(position);
	SetRotation(rotation);
	SetScale(scale);
}
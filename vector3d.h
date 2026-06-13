#include <cmath>
#include <iostream>

class Vector3D {
public:
	Vector3D(): x_(0), y_(0), z_(0) {};

	Vector3D(int xval, int yval, int zval) : x_(xval), y_(yval), z_(zval) {};

	Vector3D(const Vector3D& other) : x_(other.x()), y_(other.y()), z_(other.z()) {};

	float x() const {
		return this->x_;
	}

	float y() const {
		return this->y_;
	}

	float z() const {
		return this->z_;
	}


	bool operator == (const Vector3D& other) const{
		return (this->x_ == other.x() && this->y_ == other.y() && this->z_ == other.z());
	}

	bool operator != (const Vector3D& other) const{
		return (this->x_ != other.x() || this->y_ != other.y() || this->z_ != other.z());
	}

	Vector3D operator + (const Vector3D& other) {
		return Vector3D(this->x_+other.x(), this->y_ + other.y(), this->z_ + other.z());
	}

	float distanceTo(const Vector3D& other) const{
		float newx = pow(this->x_ - other.x(),2);
		float newy = pow(this->y_ - other.y(),2) ;
		float newz = pow(this->z_ - other.z(),2);
		float sum = newx + newy + newz;
		return (std::sqrt(sum));
	}

	Vector3D& operator =(const Vector3D& other) = delete;

	~Vector3D() = default;

private:
	const float x_;
	const float y_;
	const float z_;

};

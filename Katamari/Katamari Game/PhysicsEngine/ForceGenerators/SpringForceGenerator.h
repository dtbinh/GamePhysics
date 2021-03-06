#ifndef _SPRING_FORCE_GENERATOR_
#define _SPRING_FORCE_GENERATOR_

#include "ParticleForceGenerator.h"
#include "../Vectors.h"

class SpringForceGenerator : public ParticleForceGenerator
{
public:
	SpringForceGenerator();
	SpringForceGenerator(Particle* part);
	SpringForceGenerator(Vector3 anchor);


	~SpringForceGenerator();

	virtual void updateForce(Particle* particle, float duration);

	inline void setRestLength(float length) { mRestLength = length; }

private:

	Particle*		mEndParticle;

	Vector3			mAnchor;

	float			mK = 5.0f,
					mRestLength = 1.0f;

};

#endif // _SPRING_FORCE_GENERATOR_
#ifndef ATTRIBUTION_HXX
#define ATTRIBUTION_HXX

#include <odb/tr1/memory.hxx>
using std::tr1::shared_ptr;

#include <odb/core.hxx>

#include "entity.hxx"
#include "agent.hxx"

#pragma db object
class Attribution {

public:
	//Entity wasAttributedTo Agent
	Attribution(shared_ptr<Entity> entity, shared_ptr<Agent> agent)  {
		entity_ = entity;
		agent_ = agent;
	}

	const long getId() {
		return id_;
	}

private:
	friend class odb::access;

	Attribution() {}

#pragma db id auto
	unsigned long id_;

#pragma db not_null
	shared_ptr<Entity> entity_;

#pragma db not_null
	shared_ptr<Agent> agent_;

};

#endif // ATTRIBUTION_HXX

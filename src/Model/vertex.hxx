#ifndef VERTEX_HXX
#define VERTEX_HXX

#include <string>
#include <cstddef> // std::size_t
#include <iostream> //for namecheck

#include <odb/core.hxx>

enum vertexType {
	Agent = 0,
	Activity = 1,
	Entity = 2
};

#pragma db object
class Vertex {

public:
	Vertex() {}

	Vertex(vertexType type,
		const std::string& name,
		unsigned long start,
		unsigned long end)
		: type_(type), name_(name), start_(start), end_(end) {	}

	const vertexType GetType() const {
		return type_;
	}

	const std::string& GetName() const {
		return name_;
	}

	unsigned long GetStart() const {
		return start_;
	}

	unsigned long GetEnd() const {
		return end_;
	}

	unsigned GetId() const {
		return id_;
	}

private:
	friend class odb::access;

#pragma db id auto
	unsigned long id_;

	vertexType type_;
	std::string name_;
	unsigned long start_;
	unsigned long end_;

};

#endif // VERTEX_HXX
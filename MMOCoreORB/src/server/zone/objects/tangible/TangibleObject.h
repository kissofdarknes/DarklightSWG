/*
 *	server/zone/objects/tangible/TangibleObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef TANGIBLEOBJECT_H_
#define TANGIBLEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject : public SceneObject {
public:
	TangibleObject(LuaObject* temp, SceneObject* parent = NULL);

	void addSerializableVariables();

	byte getUnknownByte();

	int getObjectCount();

	int getMaxCondition();

	int getConditionDamage();

	int getVolume();

	float getComplexity();

	unsigned int getOptionsBitmask();

	unsigned int getPvpStatusBitmask();

	unsigned int getDefenderListUpdateCounter();

protected:
	TangibleObject(DummyConstructorParameter* param);

	virtual ~TangibleObject();

	friend class TangibleObjectHelper;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#include "server/zone/objects/scene/SceneObjectImplementation.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObjectImplementation : public SceneObjectImplementation {
protected:
	bool targetable;

	float complexity;

	int volume;

	int conditionDamage;

	int maxCondition;

	int objectCount;

	unsigned int optionsBitmask;

	unsigned int pvpStatusBitmask;

	byte unknownByte;

	Vector<SceneObject* >* defenderList;

	unsigned int defenderListUpdateCounter;

public:
	static bool registered;

	TangibleObjectImplementation(LuaObject* temp, SceneObject* parent = NULL);

	void addSerializableVariables();

	byte getUnknownByte();

	int getObjectCount();

	int getMaxCondition();

	int getConditionDamage();

	int getVolume();

	float getComplexity();

	unsigned int getOptionsBitmask();

	unsigned int getPvpStatusBitmask();

	unsigned int getDefenderListUpdateCounter();

	TangibleObject* _this;

protected:
	virtual ~TangibleObjectImplementation();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();
};

class TangibleObjectAdapter : public SceneObjectAdapter {
public:
	TangibleObjectAdapter(TangibleObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addSerializableVariables();

	byte getUnknownByte();

	int getObjectCount();

	int getMaxCondition();

	int getConditionDamage();

	int getVolume();

	float getComplexity();

	unsigned int getOptionsBitmask();

	unsigned int getPvpStatusBitmask();

	unsigned int getDefenderListUpdateCounter();

};

class TangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<TangibleObjectHelper> {
	static TangibleObjectHelper* staticInitializer;

public:
	TangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<TangibleObjectHelper>;
};

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#endif /*TANGIBLEOBJECT_H_*/

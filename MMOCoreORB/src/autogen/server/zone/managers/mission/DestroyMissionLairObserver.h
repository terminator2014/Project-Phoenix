/*
 *	autogen/server/zone/managers/mission/DestroyMissionLairObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef DESTROYMISSIONLAIROBSERVER_H_
#define DESTROYMISSIONLAIROBSERVER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class HealLairObserverEvent;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

#include "server/zone/managers/creature/LairObserver.h"

#include "engine/log/Logger.h"

namespace server {
namespace zone {
namespace objects {
namespace mission {

class DestroyMissionLairObserver : public LairObserver {
public:
	DestroyMissionLairObserver();

	void checkForHeal(TangibleObject* lair, TangibleObject* attacker, bool forceNewUpdate = false);

	bool checkForNewSpawns(TangibleObject* lair, TangibleObject* attacker, bool forceSpawn = false);

	bool isDestroyMissionLairObserver();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DestroyMissionLairObserver(DummyConstructorParameter* param);

	virtual ~DestroyMissionLairObserver();

	friend class DestroyMissionLairObserverHelper;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

namespace server {
namespace zone {
namespace objects {
namespace mission {

class DestroyMissionLairObserverImplementation : public LairObserverImplementation {

public:
	DestroyMissionLairObserverImplementation();

	DestroyMissionLairObserverImplementation(DummyConstructorParameter* param);

	void checkForHeal(TangibleObject* lair, TangibleObject* attacker, bool forceNewUpdate = false);

	bool checkForNewSpawns(TangibleObject* lair, TangibleObject* attacker, bool forceSpawn = false);

	bool isDestroyMissionLairObserver();

	WeakReference<DestroyMissionLairObserver*> _this;

	operator const DestroyMissionLairObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DestroyMissionLairObserverImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class DestroyMissionLairObserver;
};

class DestroyMissionLairObserverAdapter : public LairObserverAdapter {
public:
	DestroyMissionLairObserverAdapter(DestroyMissionLairObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void checkForHeal(TangibleObject* lair, TangibleObject* attacker, bool forceNewUpdate);

	bool checkForNewSpawns(TangibleObject* lair, TangibleObject* attacker, bool forceSpawn);

	bool isDestroyMissionLairObserver();

};

class DestroyMissionLairObserverHelper : public DistributedObjectClassHelper, public Singleton<DestroyMissionLairObserverHelper> {
	static DestroyMissionLairObserverHelper* staticInitializer;

public:
	DestroyMissionLairObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DestroyMissionLairObserverHelper>;
};

} // namespace mission
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::mission;

#endif /*DESTROYMISSIONLAIROBSERVER_H_*/

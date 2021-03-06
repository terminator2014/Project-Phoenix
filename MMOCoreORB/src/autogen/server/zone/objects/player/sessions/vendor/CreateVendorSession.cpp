/*
 *	autogen/server/zone/objects/player/sessions/vendor/CreateVendorSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "CreateVendorSession.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	CreateVendorSessionStub
 */

enum {RPC_INITIALIZESESSION__ = 3279166334,RPC_CANCELSESSION__,RPC_CLEARSESSION__,RPC_HANDLEVENDORSELECTION__BYTE_,RPC_CREATEVENDOR__STRING_,RPC_RANDOMIZEVENDORLOOKS__CREATUREOBJECT_,};

CreateVendorSession::CreateVendorSession(CreatureObject* play) : Facade(DummyConstructorParameter::instance()) {
	CreateVendorSessionImplementation* _implementation = new CreateVendorSessionImplementation(play);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CreateVendorSession");
}

CreateVendorSession::CreateVendorSession(DummyConstructorParameter* param) : Facade(param) {
	_setClassName("CreateVendorSession");
}

CreateVendorSession::~CreateVendorSession() {
}



int CreateVendorSession::initializeSession() {
	CreateVendorSessionImplementation* _implementation = static_cast<CreateVendorSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->initializeSession();
	}
}

int CreateVendorSession::cancelSession() {
	CreateVendorSessionImplementation* _implementation = static_cast<CreateVendorSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->cancelSession();
	}
}

int CreateVendorSession::clearSession() {
	CreateVendorSessionImplementation* _implementation = static_cast<CreateVendorSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->clearSession();
	}
}

void CreateVendorSession::handleVendorSelection(byte menuID) {
	CreateVendorSessionImplementation* _implementation = static_cast<CreateVendorSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEVENDORSELECTION__BYTE_);
		method.addByteParameter(menuID);

		method.executeWithVoidReturn();
	} else {
		_implementation->handleVendorSelection(menuID);
	}
}

void CreateVendorSession::createVendor(String& name) {
	CreateVendorSessionImplementation* _implementation = static_cast<CreateVendorSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEVENDOR__STRING_);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else {
		_implementation->createVendor(name);
	}
}

void CreateVendorSession::randomizeVendorLooks(CreatureObject* vendor) {
	CreateVendorSessionImplementation* _implementation = static_cast<CreateVendorSessionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RANDOMIZEVENDORLOOKS__CREATUREOBJECT_);
		method.addObjectParameter(vendor);

		method.executeWithVoidReturn();
	} else {
		_implementation->randomizeVendorLooks(vendor);
	}
}

DistributedObjectServant* CreateVendorSession::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CreateVendorSession::_getImplementationForRead() const {
	return _impl;
}

void CreateVendorSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CreateVendorSessionImplementation
 */

CreateVendorSessionImplementation::CreateVendorSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


CreateVendorSessionImplementation::~CreateVendorSessionImplementation() {
}


void CreateVendorSessionImplementation::finalize() {
}

void CreateVendorSessionImplementation::_initializeImplementation() {
	_setClassHelper(CreateVendorSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CreateVendorSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CreateVendorSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* CreateVendorSessionImplementation::_getStub() {
	return _this.get();
}

CreateVendorSessionImplementation::operator const CreateVendorSession*() {
	return _this.get();
}

void CreateVendorSessionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CreateVendorSessionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CreateVendorSessionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CreateVendorSessionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CreateVendorSessionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CreateVendorSessionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CreateVendorSessionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CreateVendorSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("CreateVendorSession");

}

void CreateVendorSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CreateVendorSessionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CreateVendorSessionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (FacadeImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x497009ac: //CreateVendorSession.player
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;

	case 0xaa558320: //CreateVendorSession.currentNode
		TypeInfo<Reference<VendorSelectionNode* > >::parseFromBinaryStream(&currentNode, stream);
		return true;

	case 0x78692ecb: //CreateVendorSession.suiSelectVendor
		TypeInfo<ManagedReference<SuiListBox* > >::parseFromBinaryStream(&suiSelectVendor, stream);
		return true;

	case 0x72ba2302: //CreateVendorSession.suiNameVendor
		TypeInfo<ManagedReference<SuiInputBox* > >::parseFromBinaryStream(&suiNameVendor, stream);
		return true;

	case 0x9d2b99a3: //CreateVendorSession.templatePath
		TypeInfo<String >::parseFromBinaryStream(&templatePath, stream);
		return true;

	}

	return false;
}

void CreateVendorSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CreateVendorSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CreateVendorSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x497009ac; //CreateVendorSession.player
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xaa558320; //CreateVendorSession.currentNode
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<VendorSelectionNode* > >::toBinaryStream(&currentNode, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x78692ecb; //CreateVendorSession.suiSelectVendor
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiListBox* > >::toBinaryStream(&suiSelectVendor, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x72ba2302; //CreateVendorSession.suiNameVendor
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<SuiInputBox* > >::toBinaryStream(&suiNameVendor, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x9d2b99a3; //CreateVendorSession.templatePath
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&templatePath, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 5;
}

CreateVendorSessionImplementation::CreateVendorSessionImplementation(CreatureObject* play) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		Logger.setLoggingName("CreateVendorSession");
	Logger::setLoggingName("CreateVendorSession");
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		player = play;
	player = play;
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		suiNameVendor = null;
	suiNameVendor = NULL;
}

int CreateVendorSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		clearSession(
	if (player != NULL)	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  			player.dropActiveSession(SessionFacadeType.CREATEVENDOR);
	player.get()->dropActiveSession(SessionFacadeType::CREATEVENDOR);
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		clearSession();
	clearSession();
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		return 0;
	return 0;
}

int CreateVendorSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		player = null;
	player = NULL;
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		currentNode = null;
	currentNode = NULL;
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		suiSelectVendor = null;
	suiSelectVendor = NULL;
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		suiNameVendor = null;
	suiNameVendor = NULL;
	// server/zone/objects/player/sessions/vendor/CreateVendorSession.idl():  		return 0;
	return 0;
}

/*
 *	CreateVendorSessionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CreateVendorSessionAdapter::CreateVendorSessionAdapter(CreateVendorSession* obj) : FacadeAdapter(obj) {
}

void CreateVendorSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZESESSION__:
		{
			
			int _m_res = initializeSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CANCELSESSION__:
		{
			
			int _m_res = cancelSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_CLEARSESSION__:
		{
			
			int _m_res = clearSession();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_HANDLEVENDORSELECTION__BYTE_:
		{
			byte menuID = inv->getByteParameter();
			
			handleVendorSelection(menuID);
			
		}
		break;
	case RPC_CREATEVENDOR__STRING_:
		{
			String name; inv->getAsciiParameter(name);
			
			createVendor(name);
			
		}
		break;
	case RPC_RANDOMIZEVENDORLOOKS__CREATUREOBJECT_:
		{
			CreatureObject* vendor = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			randomizeVendorLooks(vendor);
			
		}
		break;
	default:
		FacadeAdapter::invokeMethod(methid, inv);
	}
}

int CreateVendorSessionAdapter::initializeSession() {
	return (static_cast<CreateVendorSession*>(stub))->initializeSession();
}

int CreateVendorSessionAdapter::cancelSession() {
	return (static_cast<CreateVendorSession*>(stub))->cancelSession();
}

int CreateVendorSessionAdapter::clearSession() {
	return (static_cast<CreateVendorSession*>(stub))->clearSession();
}

void CreateVendorSessionAdapter::handleVendorSelection(byte menuID) {
	(static_cast<CreateVendorSession*>(stub))->handleVendorSelection(menuID);
}

void CreateVendorSessionAdapter::createVendor(String& name) {
	(static_cast<CreateVendorSession*>(stub))->createVendor(name);
}

void CreateVendorSessionAdapter::randomizeVendorLooks(CreatureObject* vendor) {
	(static_cast<CreateVendorSession*>(stub))->randomizeVendorLooks(vendor);
}

/*
 *	CreateVendorSessionHelper
 */

CreateVendorSessionHelper* CreateVendorSessionHelper::staticInitializer = CreateVendorSessionHelper::instance();

CreateVendorSessionHelper::CreateVendorSessionHelper() {
	className = "CreateVendorSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void CreateVendorSessionHelper::finalizeHelper() {
	CreateVendorSessionHelper::finalize();
}

DistributedObject* CreateVendorSessionHelper::instantiateObject() {
	return new CreateVendorSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* CreateVendorSessionHelper::instantiateServant() {
	return new CreateVendorSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreateVendorSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreateVendorSessionAdapter(static_cast<CreateVendorSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


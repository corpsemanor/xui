#include <memory>

#include "sc-memory/sc_memory.hpp"


#include "sc-memory/sc_event.hpp"




#define exampleModule_hpp_10_init  bool _InitInternal() override \
{ \
    ScMemoryContext ctx(sc_access_lvl_make_min, "ExampleModule::_InitInternal"); \
    bool result = true; \
    return result; \
}


#define exampleModule_hpp_10_initStatic static bool _InitStaticInternal()  \
{ \
    ScMemoryContext ctx(sc_access_lvl_make_min, "ExampleModule::_InitStaticInternal"); \
    bool result = true; \
    return result; \
}


#define exampleModule_hpp_10_decl \
public:\
	sc_result InitializeGenerated()\
	{\
		if (!ScKeynodes::Init())\
			return SC_RESULT_ERROR;\
		if (!ScAgentInit(false))\
			return SC_RESULT_ERROR;\
		return InitializeImpl();\
	}\
	sc_result ShutdownGenerated()\
	{\
		return ShutdownImpl();\
	}\
	sc_uint32 GetLoadPriorityGenerated()\
	{\
		return 50;\
	}

#define exampleModule_hpp_ExampleModule_impl 

#undef ScFileID
#define ScFileID exampleModule_hpp


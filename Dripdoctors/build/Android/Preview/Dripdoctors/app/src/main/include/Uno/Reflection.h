// This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Backends\CPlusPlus\Uno\Reflection.h.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno/Memory.h>

/**
    \addtogroup Reflection
    @{
*/
struct uField
{
    size_t _index;
    uStrong<uString*> Name;
    uStrong<uType*> DeclaringType;

    uField(const char* name, size_t index);
    uField(uType* declType, uString* name, size_t index);

    const uFieldInfo& Info();
    uObject* GetValue(uObject* object);
    void SetValue(uObject* object, uObject* value);
};

enum uFunctionFlags
{
    uFunctionFlagsVirtual = 1 << 0,
    uFunctionFlagsStatic = 1 << 1,
};

struct uFunction
{
    union {
        const void* _func;
        size_t _offset;
    };
    uStrong<uString*> Name;
    uStrong<uType*> Generic;
    uStrong<uType*> DeclaringType;
    uStrong<uType*> ReturnType;
    uStrong<uArray*> ParameterTypes;
    size_t Flags;

    uFunction(const char* name, uType* generic,
              const void* func, size_t offset, bool isStatic,
              uType* returnType, size_t paramCount = 0, ...);
    uFunction(uType* declType, uString* name, uType* generic,
              size_t flags, const void* funcOrOffset,
              uType* returnType, uArray* paramTypes);

    uDelegate* CreateDelegate(uType* type, uObject* object = NULL);
    uObject* Invoke(uObject* object = NULL, uArray* args = NULL);
};

struct uReflection
{
    size_t FieldCount;
    uField** Fields;
    void SetFields(size_t count, uField* first, ...);
    uField* GetField(uString* name);

    size_t FunctionCount;
    uFunction** Functions;
    void SetFunctions(size_t count, uFunction* first, ...);
    uFunction* GetFunction(uString* name, uArray* params = NULL);

    static uArray* GetTypes();
    static uType* GetType(uString* name);
};
/** @} */

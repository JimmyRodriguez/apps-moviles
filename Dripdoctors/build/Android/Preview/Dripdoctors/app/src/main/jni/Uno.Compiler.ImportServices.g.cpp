// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ImportServices.FilenameAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ImportServices{

// C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Source\Uno\Compiler\ImportServices\$.uno
// -----------------------------------------------------------------------------------

// public sealed class FilenameAttribute :34
// {
static void FilenameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FilenameAttribute__New1_fn, 0, true, FilenameAttribute_typeof(), 0));
}

uType* FilenameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FilenameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ImportServices.FilenameAttribute", options);
    type->SetBase(::g::Uno::Attribute_typeof());
    type->fp_build_ = FilenameAttribute_build;
    type->fp_ctor_ = (void*)FilenameAttribute__New1_fn;
    return type;
}

// public generated FilenameAttribute() :34
void FilenameAttribute__ctor_1_fn(FilenameAttribute* __this)
{
    __this->ctor_1();
}

// public generated FilenameAttribute New() :34
void FilenameAttribute__New1_fn(FilenameAttribute** __retval)
{
    *__retval = FilenameAttribute::New1();
}

// public generated FilenameAttribute() [instance] :34
void FilenameAttribute::ctor_1()
{
    uStackFrame __("Uno.Compiler.ImportServices.FilenameAttribute", ".ctor()");
    ctor_();
}

// public generated FilenameAttribute New() [static] :34
FilenameAttribute* FilenameAttribute::New1()
{
    FilenameAttribute* obj1 = (FilenameAttribute*)uNew(FilenameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ImportServices

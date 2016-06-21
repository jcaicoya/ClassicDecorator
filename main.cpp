
#include "Writer.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"


#include "TemplateDecorator.h"



int main()
{
    /*
    Writer writer;
    ConcreteComponent cc;
    ConcreteDecoratorB cdB(&cc);
    ConcreteDecoratorA cdAB(&cdB);
    ConcreteDecoratorB cdBAB(&cdAB);
    writer.fixComponent(&cdBAB);
    writer.print("Hello, World!");
    */

    A a;
    B b;
    decoratorPrint("Hello, World!", a, b, a);
    return 0;
}

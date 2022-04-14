#include <iostream>

int main()
{
    int A = 2;
    int B = 3;
    int C; // random number
    int D{2};
    int E{4};
    int F{};
    int G{D + B};

    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;
    std::cout << "C = " << C << std::endl;
    std::cout << "D = " << D << std::endl;
    std::cout << "E = " << E << std::endl;
    std::cout << "F = " << F << std::endl;
    std::cout << "G = " << G << std::endl;

    int H(2);
    int I(3.2); // the I will grab 3 coz this is using ();
    int J(H + I);
    std::cout << "H = " << H << std::endl;
    std::cout << "I = " << I << std::endl;
    std::cout << "J = " << J << std::endl;

    // check the size with syntax sizeof

    std::cout << "Size of int = " << sizeof(2) << std::endl;
    std::cout << "Size of J = " << sizeof(J) << std::endl;

    // Modifier Integer
    // unsigned and signed only for int
    // signed can be negative
    // unsigned always positive

    short ShortVar{-32768}; // 2byte
    short int ShortInt{213};
    signed short SignedShort{123};
    signed short int SignedShortInt{1231};
    unsigned short int UnsignedShortInt{21234};

    int IntVar{222}; // 4 byte
    signed SignedVar{-1231};
    signed int SignedInt{231};
    unsigned int UnsignedInt{1233};

    long LongVar{23}; // 4byte or 8byte
    long int LongInt{323};
    signed long SingedLong{23232};
    signed long int SignedLongInt{1423123212};
    unsigned long int UnsignedLongInt{1423123212};

    long long LongLong{2332}; // 8byte
    long long int LongLongInt{123123123};
    signed long long SignedLongLong{232313};
    signed long long int SignedLongLongInt{12312344};
    unsigned long long int UnsignedLongLongInt{123123124};

    std::cout << "ShortVar              = " << ShortVar << std::endl;
    std::cout << "ShortInt              = " << ShortInt << std::endl;
    std::cout << "SignedShort           = " << SignedShort << std::endl;
    std::cout << "SignedShortInt        = " << SignedShortInt << std::endl;
    std::cout << "UnsignedShortInt      = " << UnsignedShortInt << std::endl;
    std::cout << "IntVar                = " << IntVar << std::endl;
    std::cout << "SignedVar             = " << SignedVar << std::endl;
    std::cout << "SignedInt             = " << SignedInt << std::endl;
    std::cout << "UnsignedInt           = " << UnsignedInt << std::endl;
    std::cout << "LongVar               = " << LongVar << std::endl;
    std::cout << "LongInt               = " << LongInt << std::endl;
    std::cout << "SingedLong            = " << SingedLong << std::endl;
    std::cout << "SignedLongInt         = " << SignedLongInt << std::endl;
    std::cout << "UnsignedLongInt       = " << UnsignedLongInt << std::endl;
    std::cout << "LongLong              = " << LongLong << std::endl;
    std::cout << "LongLongInt           = " << LongLongInt << std::endl;
    std::cout << "SignedLongLong        = " << SignedLongLong << std::endl;
    std::cout << "SignedLongLongInt     = " << SignedLongLongInt << std::endl;
    std::cout << "UnsignedLongLongInt   = " << UnsignedLongLongInt << std::endl;

    std::cout << "Size of ShortVar              = " << sizeof(ShortVar) << std::endl;
    std::cout << "Size of ShortInt              = " << sizeof(ShortInt) << std::endl;
    std::cout << "Size of SignedShort           = " << sizeof(SignedShort) << std::endl;
    std::cout << "Size of SignedShortInt        = " << sizeof(SignedShortInt) << std::endl;
    std::cout << "Size of UnsignedShortInt      = " << sizeof(UnsignedShortInt) << std::endl;
    std::cout << "Size of IntVar                = " << sizeof(IntVar) << std::endl;
    std::cout << "Size of SignedVar             = " << sizeof(SignedVar) << std::endl;
    std::cout << "Size of SignedInt             = " << sizeof(SignedInt) << std::endl;
    std::cout << "Size of UnsignedInt           = " << sizeof(UnsignedInt) << std::endl;
    std::cout << "Size of LongVar               = " << sizeof(LongVar) << std::endl;
    std::cout << "Size of LongInt               = " << sizeof(LongInt) << std::endl;
    std::cout << "Size of SingedLong            = " << sizeof(SingedLong) << std::endl;
    std::cout << "Size of SignedLongInt         = " << sizeof(SignedLongInt) << std::endl;
    std::cout << "Size of UnsignedLongInt       = " << sizeof(UnsignedLongInt) << std::endl;
    std::cout << "Size of LongLong              = " << sizeof(LongLong) << std::endl;
    std::cout << "Size of LongLongInt           = " << sizeof(LongLongInt) << std::endl;
    std::cout << "Size of SignedLongLong        = " << sizeof(SignedLongLong) << std::endl;
    std::cout << "Size of SignedLongLongInt     = " << sizeof(SignedLongLongInt) << std::endl;
    std::cout << "Size of UnsignedLongLongInt   = " << sizeof(UnsignedLongLongInt) << std::endl;
}
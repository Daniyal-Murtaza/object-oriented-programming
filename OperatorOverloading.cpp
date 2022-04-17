// See (Operator Oveloading theory.png)

// Example:
// + ----- The built in data type used to add integers i.e, 5 + 6 = 9
// Now, for e.g. we can also use + operator to add objects of a user defined class i.e, obj1 + obj2

// If we overload the + operator then:
// (1) can be used to add integers
// (2) can be used to add objects
// in the same program

// We use opearator function to overload operators

//****************************************************************************************************************

// SYNTAX:

//(For outside the class)

// return-type class-name::operator op(arguement list)             //(op replaces by opearator +,_ etc)
// {
//        body
// }

//(For inside the class)

// return-type operator op(arguement list)                        //(op replaces by opearator +,_ etc)
// {
//        body
// }

//****************************************************************************************************************

// UNARY OPERATOR (1 operand) --- a++

// For unary opearator overloading
// E.G.
// If class member:
// test opearator +()

// If friend function (outside the class):
// test opearator +(test)

//*****************************************************************************************************************

// BINARY OPERATOR (2 operand) --- a+b

// For binary operator overloading
// E.G.
// If class member:
// test opearator +(test)

// If friend function (outside the class):
// test opearator +(test,test)

//******************************************************************************************************************

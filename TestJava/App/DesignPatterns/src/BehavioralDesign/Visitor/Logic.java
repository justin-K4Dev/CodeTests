package BehavioralDesign.Visitor;

/**
 * Created by justin on 2015-07-25.
 */

/*
    Visitor Pattern

    In Visitor pattern, we use a visitor class which changes the executing algorithm of an element class.
    By this way, execution algorithm of element can vary as and when visitor varies.
    This pattern comes under behavior pattern category.

    As per the pattern, element object has to accept the visitor object
    so that visitor object handles the operation on the element object.

    Implementation

    We are going to create a ComputerPart interface defining accept opearation.
    Keyboard, Mouse, Monitor and Computer are concrete classes implementing ComputerPart interface.
    We will define another interface ComputerPartVisitor which will define a visitor class operations.
    Computer uses concrete visitor to do corresponding action.

    VisitorPatternDemo, our demo class,
    will use Computer and ComputerPartVisitor classes to demonstrate use of visitor pattern.
 */


public class Logic {

    public static void Test() {

        ComputerPart computer = new Computer();
        computer.accept(new ComputerPartDisplayVisitor());
    }
}

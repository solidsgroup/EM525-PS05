FEM Coding Assignment: Quadrature Points and the Isoparametric Element Jacobian
===============================================================================

This assignment extends the Q4, Q9, CST, and LST elements that you implemented in PS03 to
include quadrature weights and points, as well as to add the calculation of the Jacobian.

Initial setup (same as before)
------------------------------

1. Check out the problem repository
    
         git clone https://github.com/solidsgroup/EM525-PS05.git
   
2. Change into the problem directory

         cd EM525-PS05
   
3. Use this command to install eigen (optional: you can skip this if you have eigen installed)

         make eigen

4. Now, compile the code

         make

   You should see a number of warnings.
   These should disappear once you have implemented the assignment.

Part 1: Copying previous implementation of LST, CST, Q4, Q9
-----------------------------------------------------------

Copy and paste your previous implementation for the following functions where indicated by "TODO"

- `src/Element/LST.H`
- `src/Element/CST.H`
- `src/Element/Q4.H`
- `src/Element/Q9.H`

(For future assignments, you will be able to simply copy/paste the files.)

If this passes successfully, you will see the usual "test.element..." tests pass 
(except for the "energyderivative" tests)


Part 2: 
-------

You will find TODOs in the following file

- `src/Model/Isotropic.H`

In this element, implement the calculation of the isotropic elastic energy density and its derivatives.
Once complete, you should see the "model.isotropic.derivative" test pass.


Part 3:
-------

You will find TODOs in the following file






// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -32;
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 8;
unsigned long int var_1_5 = 1000;
signed short int var_1_6 = 19907;
signed short int var_1_7 = 0;
signed short int var_1_8 = 16753;
signed short int var_1_9 = 5;
float var_1_10 = 2.1;
unsigned short int var_1_11 = 5;
float var_1_12 = -0.7;
signed char var_1_13 = -1;
signed char var_1_14 = 64;
signed char var_1_15 = -2;
double var_1_16 = 32.75;
double var_1_18 = 50.7;
unsigned char var_1_19 = 0;
double var_1_20 = 1.8;
double var_1_21 = 4.5;
double var_1_22 = 10.275;
double var_1_23 = 15.5;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 200;
unsigned long int var_1_26 = 2;
unsigned long int var_1_27 = 2857710080;
unsigned char var_1_28 = 0;
signed char var_1_29 = 8;
signed long int var_1_30 = -256;
unsigned short int var_1_31 = 100;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 1;
signed char var_1_34 = -1;
signed char var_1_35 = 64;
signed char var_1_36 = 32;
signed char var_1_37 = 1;
unsigned short int var_1_38 = 1;
unsigned short int var_1_39 = 50124;
unsigned short int var_1_40 = 16478;
unsigned short int var_1_41 = 8;
signed short int var_1_42 = 1000;
signed short int var_1_43 = 19285;
signed short int var_1_44 = 5;
signed long int var_1_45 = -50;
signed long int var_1_46 = 4;
signed short int var_1_47 = 16;
signed short int var_1_48 = 2;
unsigned long int var_1_49 = 16;
double var_1_50 = -0.4;
signed char var_1_51 = 100;
double var_1_52 = 100000000000.5;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (( (((((var_1_2)) < ((var_1_3))) ? ((var_1_2)) : ((var_1_3))))) + (64u));
                              if ( ((stepLocal_0) != ( ((var_1_4) * (var_1_5))))) {
                               var_1_1 = (
                                ((
                                 ((
     var_1_6
    ) - (
                                  ((
      32
     ) + (
      var_1_7
     ))
    ))
   ) - (
                                 ((
     var_1_8
    ) - (
     var_1_9
    ))
   ))
  );
 }
             if ( ((var_1_39) >= (var_1_30))) {
              var_1_45 = (
               ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))
  );
 } else {
              var_1_45 = (
               ((
    var_1_36
   ) + (
    var_1_35
   ))
  );
 }
             if ( (( (( ((var_1_40) - (var_1_41))) << (var_1_45))) <= ( (~ (var_1_36))))) {
              if ( (( (( ((((16) < 0 ) ? -(16) : (16)))) >> ( ((var_1_47) - (var_1_48))))) <= (var_1_45))) {
               var_1_46 = (
    var_1_37
   );
  }
 }
                              if ( ((var_1_7) < ( (( ((var_1_8) - (var_1_9))) >> (var_1_11))))) {
                               var_1_10 = (
   var_1_12
  );
 }
                              if ( ((var_1_8) > (var_1_7))) {
                               var_1_13 = (
                                ((((( var_1_11 )) > (( var_1_14 ))) ? (( var_1_11 )) : (( var_1_14 ))))
  );
 }
            if ( (( ((var_1_30) * (var_1_31))) <= (var_1_29))) {
             if (var_1_32) {
              var_1_28 = (
               (! (
     var_1_33
    ))
   );
  }
 }
 signed long int stepLocal_1 = 4;
                               if (var_1_19) {
                                if ( ((stepLocal_1) > (var_1_9))) {
                                 var_1_18 = (
    var_1_12
   );
  }
 } else {
                                var_1_18 = (
                                 ((
                                  ((((( var_1_20 )) > (( var_1_21 ))) ? (( var_1_20 )) : (( var_1_21 ))))
   ) - (
                                  ((((( var_1_22 )) > (( var_1_23 ))) ? (( var_1_22 )) : (( var_1_23 ))))
   ))
  );
 }
             if ( ((var_1_31) != (var_1_40))) {
             var_1_42 = (
              ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))
  );
 } else {
              if (var_1_33) {
               var_1_42 = (
                (((((( var_1_41 ) - ( (( var_1_43 ) - ( var_1_44 )) ))) < 0 ) ? -((( var_1_41 ) - ( (( var_1_43 ) - ( var_1_44 )) ))) : ((( var_1_41 ) - ( (( var_1_43 ) - ( var_1_44 )) )))))
   );
  } else {
               var_1_42 = (
    var_1_34
   );
  }
 }
                               if ( ((var_1_20) < (var_1_16))) {
                                var_1_24 = (
                                 ((
                                  ((
     var_1_25
    ) - (
     var_1_11
    ))
   ) - (
    2
   ))
  );
 }
            var_1_38 = (
             ((
   var_1_39
  ) - (
              (((((( var_1_40 ) - ( var_1_41 ))) < 0 ) ? -((( var_1_40 ) - ( var_1_41 ))) : ((( var_1_40 ) - ( var_1_41 )))))
  ))
 );
             if (var_1_28) {
              var_1_49 = (
               ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))
  );
 }
                               if ( (( (( ((var_1_18) / (var_1_16))) + (var_1_12))) >= ( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) {
                                var_1_15 = (
                                 ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))
  );
 } else {
                                if ( ((var_1_18) < (var_1_16))) {
                                 var_1_15 = (
    var_1_11
   );
  }
 }
            if ( ((var_1_30) > (var_1_31))) {
             var_1_34 = (
              ((((( ((((( var_1_35 )) < (( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) ))) ? (( var_1_35 )) : (( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) )))) )) > (( var_1_37 ))) ? (( ((((( var_1_35 )) < (( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) ))) ? (( var_1_35 )) : (( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) )))) )) : (( var_1_37 ))))
  );
 }
             if ( ((var_1_37) > ( ((var_1_48) - ( ((var_1_51) - (10))))))) {
              var_1_50 = (
   var_1_52
  );
 }
 signed long int stepLocal_2 = ((var_1_15) / ( (((((var_1_25)) < ((var_1_8))) ? ((var_1_25)) : ((var_1_8))))));
                               if ( (( ((var_1_9) + (var_1_14))) < (stepLocal_2))) {
                                var_1_26 = (
                                 ((((( (( var_1_27 ) - ( var_1_8 )) )) < (( var_1_11 ))) ? (( (( var_1_27 ) - ( var_1_8 )) )) : (( var_1_11 ))))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 16382);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 8191);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 16383);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 30);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(var_1_16 != 0.0F);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 190);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 2147483647);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -128);
 assume_abort_if_not(var_1_29 <= 127);
 assume_abort_if_not(var_1_29 != 0);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 65535);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -127);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -126);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 32767);
 assume_abort_if_not(var_1_39 <= 65534);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 16383);
 assume_abort_if_not(var_1_40 <= 32767);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 16383);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= 16383);
 assume_abort_if_not(var_1_43 <= 32766);
 var_1_44 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 16383);
 var_1_47 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_47 >= 15);
 assume_abort_if_not(var_1_47 <= 30);
 var_1_48 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 14);
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= 63);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_52 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_52 >= -922337.2036854766000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854766000e+12F && var_1_52 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (( (((((var_1_2)) < ((var_1_3))) ? ((var_1_2)) : ((var_1_3))))) + (64u))) != ( ((var_1_4) * (var_1_5))))) {
 }
 if ( ((var_1_7) < ( (( ((var_1_8) - (var_1_9))) >> (var_1_11))))) {
 }
 if ( ((var_1_8) > (var_1_7))) {
 }
 if ( (( (( ((var_1_18) / (var_1_16))) + (var_1_12))) >= ( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) {
 } else {
  if ( ((var_1_18) < (var_1_16))) {
  }
 }
 if (var_1_19) {
  if ( ((4) > (var_1_9))) {
  }
 } else {
 }
 if ( ((var_1_20) < (var_1_16))) {
 }
 if ( (( ((var_1_9) + (var_1_14))) < ( ((var_1_15) / ( (((((var_1_25)) < ((var_1_8))) ? ((var_1_25)) : ((var_1_8))))))))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                         ((
                                               ((
                                               ((
                                                ((((( var_1_2 )) < (( var_1_3 ))) ? (( var_1_2 )) : (( var_1_3 ))))
        ) + (
         64u
        ))
       ) != (
                                               ((
         var_1_4
        ) * (
         var_1_5
        ))
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((signed short int) (
                                            ((
                                             ((
           var_1_6
          ) - (
                                              ((
            32
           ) + (
            var_1_7
           ))
          ))
         ) - (
                                             ((
           var_1_8
          ) - (
           var_1_9
          ))
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                         ((
                                               ((
        var_1_7
       ) < (
                                                ((
                                                 ((
          var_1_8
         ) - (
          var_1_9
         ))
        ) >> (
         var_1_11
        ))
       ))
      ) ? (
                                          ((
        var_1_10
       ) == (
                                           ((float) (
         var_1_12
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                        ((
                                              ((
       var_1_8
      ) > (
       var_1_7
      ))
     ) ? (
                                         ((
       var_1_13
      ) == (
                                          ((signed char) (
                                           ((((( var_1_11 )) > (( var_1_14 ))) ? (( var_1_11 )) : (( var_1_14 ))))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                        ((
                                               ((
                                                ((
                                                  ((
        var_1_18
       ) / (
        var_1_16
       ))
      ) + (
       var_1_12
      ))
     ) >= (
                                                 ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((signed char) (
                                            ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))
      ))
     ))
    ) : (
                                          ((
                                                 ((
       var_1_18
      ) < (
       var_1_16
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((signed char) (
        var_1_11
       ))
      ))
     ) : (
      1
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_19
   ) ? (
                                         ((
                                                ((
      4
     ) > (
      var_1_9
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((double) (
       var_1_12
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((double) (
                                           ((
                                            ((((( var_1_20 )) > (( var_1_21 ))) ? (( var_1_20 )) : (( var_1_21 ))))
      ) - (
                                            ((((( var_1_22 )) > (( var_1_23 ))) ? (( var_1_22 )) : (( var_1_23 ))))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_20
   ) < (
    var_1_16
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
                                          ((
                                           ((
       var_1_25
      ) - (
       var_1_11
      ))
     ) - (
      2
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_9
   ) + (
    var_1_14
   ))
  ) < (
                                              ((
    var_1_15
   ) / (
                                               ((((( var_1_25 )) < (( var_1_8 ))) ? (( var_1_25 )) : (( var_1_8 ))))
   ))
  ))
 ) ? (
                                       ((
   var_1_26
  ) == (
                                        ((unsigned long int) (
                                         ((((( (( var_1_27 ) - ( var_1_8 )) )) < (( var_1_11 ))) ? (( (( var_1_27 ) - ( var_1_8 )) )) : (( var_1_11 ))))
   ))
  ))
 ) : (
  1
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}

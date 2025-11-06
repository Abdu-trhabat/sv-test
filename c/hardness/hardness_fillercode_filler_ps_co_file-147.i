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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1;
unsigned char var_1_4 = 5;
double var_1_5 = 1.625;
double var_1_6 = 7.5;
double var_1_7 = 9.9;
unsigned long int var_1_8 = 100000000;
unsigned char var_1_9 = 1;
unsigned long int var_1_11 = 3110153948;
signed char var_1_12 = 16;
signed char var_1_13 = -1;
signed char var_1_14 = 100;
signed char var_1_15 = -25;
signed long int var_1_16 = 64;
signed long int var_1_17 = -10;
signed long int var_1_18 = 4;
unsigned char var_1_19 = 1;
signed long int var_1_20 = 1880114960;
signed short int var_1_21 = -50;
signed short int var_1_23 = 64;
signed short int var_1_24 = 25;
unsigned short int var_1_25 = 256;
unsigned char var_1_26 = 0;
double var_1_27 = 5.2;
double var_1_28 = 16.4;
unsigned short int var_1_30 = 10;
unsigned short int var_1_31 = 10;
unsigned long int var_1_32 = 16;
signed char var_1_33 = 4;
double var_1_34 = 255.2;
signed char var_1_35 = 2;
signed char var_1_36 = 1;
signed char var_1_37 = 16;
signed char var_1_38 = 64;
signed char var_1_39 = 32;
unsigned long int var_1_40 = 2;
signed long int var_1_41 = 16;
signed char var_1_43 = 4;
signed char var_1_44 = 64;
signed char var_1_45 = 32;
unsigned char var_1_46 = 0;
unsigned long int var_1_48 = 3791808184;
unsigned char var_1_49 = 0;
float var_1_50 = 31.55;
float var_1_51 = 32.7;
float var_1_52 = 128.5;
unsigned long int last_1_var_1_8 = 100000000;
signed long int last_1_var_1_16 = 64;
signed long int last_1_var_1_17 = -10;
void initially(void) {
}
void step(void) {
                   if ( ((var_1_18) >= (8))) {
                    var_1_21 = (
                     ((((( var_1_23 )) > (( var_1_24 ))) ? (( var_1_23 )) : (( var_1_24 ))))
  );
 } else {
                    if ( ((var_1_24) > (var_1_18))) {
                     var_1_21 = (
    var_1_23
   );
  }
 }
                   if ( ((var_1_26) && ( ((7.25) <= ( ((var_1_27) - (var_1_28))))))) {
                    if ( ((var_1_17) < ( (((((var_1_8)) > ((var_1_17))) ? ((var_1_8)) : ((var_1_17))))))) {
                     var_1_25 = (
    var_1_30
   );
  }
 }
                   var_1_31 = (
  var_1_30
 );
                   var_1_32 = (
  var_1_30
 );
                   if ( ((var_1_28) < ( ((var_1_27) / (var_1_34))))) {
                    if (var_1_26) {
                     var_1_33 = (
                      ((((( (( var_1_35 ) + ( ((((( -2 )) < (( var_1_36 ))) ? (( -2 )) : (( var_1_36 )))) )) )) > (( var_1_37 ))) ? (( (( var_1_35 ) + ( ((((( -2 )) < (( var_1_36 ))) ? (( -2 )) : (( var_1_36 )))) )) )) : (( var_1_37 ))))
   );
  }
 }
                   if ( (( ((var_1_27) * (var_1_28))) <= (var_1_34))) {
                    if ( (( ((var_1_39) >> (var_1_40))) >= ( ((100000000) % (var_1_41))))) {
                     var_1_38 = (
                      ((
                       ((
      var_1_40
     ) + (
      var_1_43
     ))
    ) - (
                       ((((( var_1_44 )) > (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 ))))
    ))
   );
  }
 } else {
                    var_1_38 = (
   var_1_43
  );
 }
                   if ( (( ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))) > (var_1_27))) {
                    if ( (( ((var_1_1) / (var_1_40))) > ( (~ ( ((var_1_48) - (1u))))))) {
                     var_1_46 = (
    var_1_49
   );
  }
 }
                   if ( ((var_1_16) >= (var_1_39))) {
                    var_1_50 = (
                     ((
    var_1_51
   ) + (
    var_1_52
   ))
  );
 }
                                          if ( ((last_1_var_1_16) > (last_1_var_1_8))) {
                                           if ( ((last_1_var_1_8) == ( ((128) - (var_1_4))))) {
                                           var_1_1 = (
    var_1_4
   );
  } else {
                                            var_1_1 = (
                                             ((((( ((((last_1_var_1_8) < 0 ) ? -(last_1_var_1_8) : (last_1_var_1_8))) )) > (( ((((32u) < 0 ) ? -(32u) : (32u))) ))) ? (( ((((last_1_var_1_8) < 0 ) ? -(last_1_var_1_8) : (last_1_var_1_8))) )) : (( ((((32u) < 0 ) ? -(32u) : (32u))) ))))
   );
  }
 } else {
                                            var_1_1 = (
   last_1_var_1_16
  );
 }
                                           if ( (( ((last_1_var_1_8) < (16u))) || (var_1_9))) {
                                            if (var_1_9) {
                                             if ( ((last_1_var_1_17) >= (var_1_4))) {
                                              var_1_8 = (
                                               ((
      var_1_11
     ) - (
      last_1_var_1_8
     ))
    );
   } else {
                                              var_1_8 = (
     last_1_var_1_8
    );
   }
  } else {
                                             var_1_8 = (
    last_1_var_1_17
   );
  }
 } else {
                                            var_1_8 = (
   last_1_var_1_8
  );
 }
 unsigned char stepLocal_0 = var_1_4;
                               if ( ((var_1_8) == (stepLocal_0))) {
                                var_1_5 = (
                                 ((
    var_1_6
   ) + (
    var_1_7
   ))
  );
 }
                                if ( ((-1000000) != (var_1_8))) {
                                 var_1_12 = (
                                  ((((( ((((( var_1_13 )) > (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 )))) )) < (( var_1_15 ))) ? (( ((((( var_1_13 )) > (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 )))) )) : (( var_1_15 ))))
  );
 }
                                if (var_1_9) {
                                 if (var_1_19) {
                                  var_1_18 = (
                                   ((((( ((((( var_1_4 )) > (( var_1_14 ))) ? (( var_1_4 )) : (( var_1_14 )))) )) < (( (( 2 ) + ( var_1_13 )) ))) ? (( ((((( var_1_4 )) > (( var_1_14 ))) ? (( var_1_4 )) : (( var_1_14 )))) )) : (( (( 2 ) + ( var_1_13 )) ))))
   );
  }
 } else {
                                 var_1_18 = (
                                  ((
    var_1_4
   ) - (
                                   ((
     var_1_20
    ) - (
     var_1_1
    ))
   ))
  );
 }
                                if ( ((var_1_4) <= ( ((var_1_8) + ( ((var_1_8) + (5))))))) {
                                 var_1_16 = (
   var_1_1
  );
 }
 signed char stepLocal_1 = var_1_15;
                                if ( (( (((((last_1_var_1_17)) < ((var_1_13))) ? ((last_1_var_1_17)) : ((var_1_13))))) <= (stepLocal_1))) {
                                 var_1_17 = (
                                  ((
    var_1_16
   ) - (
    var_1_1
   ))
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 1073741823);
 assume_abort_if_not(var_1_20 <= 2147483646);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -32767);
 assume_abort_if_not(var_1_23 <= 32766);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32767);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 65534);
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 assume_abort_if_not(var_1_34 != 0.0F);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -63);
 assume_abort_if_not(var_1_35 <= 63);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -63);
 assume_abort_if_not(var_1_36 <= 63);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -127);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 127);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 6);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= -2147483648);
 assume_abort_if_not(var_1_41 <= 2147483647);
 assume_abort_if_not(var_1_41 != 0);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 126);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 126);
 var_1_48 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_48 >= 2147483647);
 assume_abort_if_not(var_1_48 <= 4294967295);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 0);
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= -461168.6018427383000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
 last_1_var_1_16 = var_1_16;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 if ( ((last_1_var_1_16) > (last_1_var_1_8))) {
  if ( ((last_1_var_1_8) == ( ((128) - (var_1_4))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_8) == (var_1_4))) {
 }
 if ( (( ((last_1_var_1_8) < (16u))) || (var_1_9))) {
  if (var_1_9) {
   if ( ((last_1_var_1_17) >= (var_1_4))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((-1000000) != (var_1_8))) {
 }
 if ( ((var_1_4) <= ( ((var_1_8) + ( ((var_1_8) + (5))))))) {
 }
 if ( (( (((((last_1_var_1_17)) < ((var_1_13))) ? ((last_1_var_1_17)) : ((var_1_13))))) <= (var_1_15))) {
 }
 if (var_1_9) {
  if (var_1_19) {
  }
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                                      ((
                                                          ((
        last_1_var_1_16
       ) > (
        last_1_var_1_8
       ))
      ) ? (
                                                       ((
                                                             ((
         last_1_var_1_8
        ) == (
                                                              ((
          128
         ) - (
          var_1_4
         ))
        ))
       ) ? (
                                                        ((
         var_1_1
        ) == (
                                                         ((unsigned long int) (
          var_1_4
         ))
        ))
       ) : (
                                                        ((
         var_1_1
        ) == (
                                                         ((unsigned long int) (
                                                          ((((( ((((last_1_var_1_8) < 0 ) ? -(last_1_var_1_8) : (last_1_var_1_8))) )) > (( ((((32u) < 0 ) ? -(32u) : (32u))) ))) ? (( ((((last_1_var_1_8) < 0 ) ? -(last_1_var_1_8) : (last_1_var_1_8))) )) : (( ((((32u) < 0 ) ? -(32u) : (32u))) ))))
         ))
        ))
       ))
      ) : (
                                                       ((
        var_1_1
       ) == (
                                                        ((unsigned long int) (
         last_1_var_1_16
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_8
       ) == (
        var_1_4
       ))
      ) ? (
                                           ((
        var_1_5
       ) == (
                                            ((double) (
                                             ((
          var_1_6
         ) + (
          var_1_7
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
        last_1_var_1_8
       ) < (
        16u
       ))
      ) || (
       var_1_9
      ))
     ) ? (
                                                      ((
       var_1_9
      ) ? (
                                                       ((
                                                            ((
         last_1_var_1_17
        ) >= (
         var_1_4
        ))
       ) ? (
                                                        ((
         var_1_8
        ) == (
                                                         ((unsigned long int) (
                                                          ((
           var_1_11
          ) - (
           last_1_var_1_8
          ))
         ))
        ))
       ) : (
                                                        ((
         var_1_8
        ) == (
                                                         ((unsigned long int) (
          last_1_var_1_8
         ))
        ))
       ))
      ) : (
                                                       ((
        var_1_8
       ) == (
                                                        ((unsigned long int) (
         last_1_var_1_17
        ))
       ))
      ))
     ) : (
                                                      ((
       var_1_8
      ) == (
                                                       ((unsigned long int) (
        last_1_var_1_8
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      -1000000
     ) != (
      var_1_8
     ))
    ) ? (
                                          ((
      var_1_12
     ) == (
                                           ((signed char) (
                                            ((((( ((((( var_1_13 )) > (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 )))) )) < (( var_1_15 ))) ? (( ((((( var_1_13 )) > (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 )))) )) : (( var_1_15 ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_4
    ) <= (
                                                ((
      var_1_8
     ) + (
                                                 ((
       var_1_8
      ) + (
       5
      ))
     ))
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((signed long int) (
      var_1_1
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((((( last_1_var_1_17 )) < (( var_1_13 ))) ? (( last_1_var_1_17 )) : (( var_1_13 ))))
   ) <= (
    var_1_15
   ))
  ) ? (
                                        ((
    var_1_17
   ) == (
                                         ((signed long int) (
                                          ((
      var_1_16
     ) - (
      var_1_1
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_9
 ) ? (
                                       ((
   var_1_19
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((signed long int) (
                                          ((((( ((((( var_1_4 )) > (( var_1_14 ))) ? (( var_1_4 )) : (( var_1_14 )))) )) < (( (( 2 ) + ( var_1_13 )) ))) ? (( ((((( var_1_4 )) > (( var_1_14 ))) ? (( var_1_4 )) : (( var_1_14 )))) )) : (( (( 2 ) + ( var_1_13 )) ))))
    ))
   ))
  ) : (
   1
  ))
 ) : (
                                       ((
   var_1_18
  ) == (
                                        ((signed long int) (
                                         ((
     var_1_4
    ) - (
                                          ((
      var_1_20
     ) - (
      var_1_1
     ))
    ))
   ))
  ))
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

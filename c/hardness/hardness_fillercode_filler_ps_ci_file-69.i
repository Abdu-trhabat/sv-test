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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 4;
signed short int var_1_2 = -4;
signed short int var_1_3 = 128;
signed short int var_1_4 = 10;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 64;
signed char var_1_9 = -128;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 32.75;
double var_1_13 = 255.6;
unsigned short int var_1_14 = 5;
float var_1_16 = 8.6;
float var_1_17 = 9.5;
float var_1_18 = 99.2;
unsigned char var_1_19 = 128;
float var_1_21 = 8.5;
double var_1_22 = 4.75;
signed short int var_1_23 = -2;
unsigned short int var_1_24 = 64;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 100;
unsigned short int var_1_28 = 16;
unsigned short int var_1_29 = 10;
unsigned long int var_1_30 = 128;
signed short int var_1_31 = 1000;
signed char var_1_32 = -10;
signed short int var_1_34 = -256;
unsigned char var_1_37 = 50;
signed long int var_1_40 = -64;
double last_1_var_1_12 = 32.75;
signed short int last_1_var_1_23 = -2;
void initially(void) {
}
void step(void) {
                  if (var_1_10) {
                   var_1_24 = (
                    ((
                     ((
                      ((((( var_1_26 )) > (( var_1_27 ))) ? (( var_1_26 )) : (( var_1_27 ))))
    ) + (
     var_1_28
    ))
   ) + (
    1
   ))
  );
 }
                  var_1_29 = (
  var_1_26
 );
                  if ( ((var_1_26) > (var_1_28))) {
                   if ( ((var_1_14) >= (var_1_26))) {
                    var_1_30 = (
    var_1_26
   );
  }
 }
                   if ( ((var_1_30) <= (100u))) {
                    var_1_31 = (
                     ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
  );
 }
                   if (var_1_10) {
                    if ( ((var_1_28) <= (var_1_26))) {
                     var_1_32 = (
                      ((((-32) < 0 ) ? -(-32) : (-32)))
   );
  } else {
                     var_1_32 = (
                      ((((( var_1_6 )) < (( 0 ))) ? (( var_1_6 )) : (( 0 ))))
   );
  }
 } else {
                    if ( (( ((var_1_28) % (var_1_34))) != ( ((var_1_14) + (var_1_30))))) {
                     if ( (( (((((8.4f)) < ((var_1_12))) ? ((8.4f)) : ((var_1_12))))) < (127.2f))) {
                      var_1_32 = (
                       ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
    );
   } else {
                      var_1_32 = (
     var_1_7
    );
   }
  } else {
                     if ( ((var_1_28) != (var_1_14))) {
                      var_1_32 = (
     var_1_6
    );
   }
  }
 }
                   if (var_1_10) {
                    var_1_37 = (
                     ((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))
  );
 } else {
                    var_1_37 = (
                     ((((( var_1_6 )) < (( (((((( var_1_5 ) - ( 1 ))) < 0 ) ? -((( var_1_5 ) - ( 1 ))) : ((( var_1_5 ) - ( 1 ))))) ))) ? (( var_1_6 )) : (( (((((( var_1_5 ) - ( 1 ))) < 0 ) ? -((( var_1_5 ) - ( 1 ))) : ((( var_1_5 ) - ( 1 ))))) ))))
  );
 }
                   if ( ((var_1_7) > ( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) {
                    if ( ((var_1_34) >= (var_1_5))) {
                     if ( ((var_1_26) <= ( (~ (var_1_30))))) {
                      var_1_40 = (
     var_1_34
    );
   }
  }
 }
 unsigned char stepLocal_5 = var_1_5;
                                            if ( ((last_1_var_1_12) < (var_1_13))) {
                                             if ( ((last_1_var_1_23) == (stepLocal_5))) {
                                              var_1_14 = (
    var_1_7
   );
  }
 }
                                  var_1_23 = (
  var_1_14
 );
 signed long int stepLocal_0 = ((var_1_3) - (var_1_4));
                               if ( ((var_1_14) >= (stepLocal_0))) {
                                var_1_1 = (
                                 ((
                                  ((
     var_1_5
    ) - (
                                   ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
    ))
   ) - (
    var_1_8
   ))
  );
 } else {
                                var_1_1 = (
                                 ((
    32
   ) + (
    var_1_7
   ))
  );
 }
 unsigned char stepLocal_2 = var_1_11;
 signed short int stepLocal_1 = var_1_4;
                               if ( (( ((var_1_8) - (var_1_5))) >= (stepLocal_1))) {
                                if ( ((var_1_10) || (stepLocal_2))) {
                                 var_1_9 = (
    var_1_6
   );
  } else {
                                 var_1_9 = (
    var_1_7
   );
  }
 } else {
                                var_1_9 = (
   var_1_5
  );
 }
 unsigned char stepLocal_4 = var_1_7;
 unsigned char stepLocal_3 = (( ((var_1_9) + (var_1_2))) == (var_1_3));
                                if ( ((stepLocal_4) > (var_1_4))) {
                                 if ( ((stepLocal_3) && (var_1_10))) {
                                  if ( (! (var_1_11))) {
                                   var_1_12 = (
     var_1_13
    );
   } else {
                                   var_1_12 = (
     1.4
    );
   }
  } else {
                                  var_1_12 = (
    var_1_13
   );
  }
 } else {
                                 var_1_12 = (
   var_1_13
  );
 }
                                if ( (! ( ((var_1_11) && (var_1_10))))) {
                                 var_1_16 = (
                                  ((
    var_1_17
   ) + (
    var_1_18
   ))
  );
 }
 signed short int stepLocal_7 = var_1_23;
 signed short int stepLocal_6 = var_1_23;
                                if ( ((stepLocal_7) < (var_1_7))) {
                                 if (var_1_10) {
                                  if ( ((stepLocal_6) >= ( ((var_1_6) % (var_1_5))))) {
                                   var_1_19 = (
     var_1_8
    );
   }
  } else {
                                  var_1_19 = (
    50
   );
  }
 }
                                var_1_21 = (
  var_1_13
 );
                                var_1_22 = (
  2.7
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 190);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 16384);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 16384);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 16383);
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= -32768);
 assume_abort_if_not(var_1_34 <= 32767);
 assume_abort_if_not(var_1_34 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
 last_1_var_1_23 = var_1_23;
}
int property(void) {
 if ( ((var_1_14) >= ( ((var_1_3) - (var_1_4))))) {
 } else {
 }
 if ( (( ((var_1_8) - (var_1_5))) >= (var_1_4))) {
  if ( ((var_1_10) || (var_1_11))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_7) > (var_1_4))) {
  if ( (( (( ((var_1_9) + (var_1_2))) == (var_1_3))) && (var_1_10))) {
   if ( (! (var_1_11))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((last_1_var_1_12) < (var_1_13))) {
  if ( ((last_1_var_1_23) == (var_1_5))) {
  }
 }
 if ( (! ( ((var_1_11) && (var_1_10))))) {
 }
 if ( ((var_1_23) < (var_1_7))) {
  if (var_1_10) {
   if ( ((var_1_23) >= ( ((var_1_6) % (var_1_5))))) {
   }
  } else {
  }
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
                                                 ((
          var_1_14
         ) >= (
                                                  ((
           var_1_3
          ) - (
           var_1_4
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned char) (
                                               ((
                                                ((
             var_1_5
            ) - (
                                                 ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
            ))
           ) - (
            var_1_8
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned char) (
                                               ((
            32
           ) + (
            var_1_7
           ))
          ))
         ))
        ))
       ) && (
                                            ((
                                                  ((
                                                   ((
           var_1_8
          ) - (
           var_1_5
          ))
         ) >= (
          var_1_4
         ))
        ) ? (
                                             ((
                                                   ((
           var_1_10
          ) || (
           var_1_11
          ))
         ) ? (
                                              ((
           var_1_9
          ) == (
                                               ((signed char) (
            var_1_6
           ))
          ))
         ) : (
                                              ((
           var_1_9
          ) == (
                                               ((signed char) (
            var_1_7
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_9
         ) == (
                                              ((signed char) (
           var_1_5
          ))
         ))
        ))
       ))
      ) && (
                                            ((
                                                 ((
         var_1_7
        ) > (
         var_1_4
        ))
       ) ? (
                                             ((
                                                   ((
                                                    ((
                                                     ((
            var_1_9
           ) + (
            var_1_2
           ))
          ) == (
           var_1_3
          ))
         ) && (
          var_1_10
         ))
        ) ? (
                                              ((
                                                     (! (
           var_1_11
          ))
         ) ? (
                                               ((
           var_1_12
          ) == (
                                                ((double) (
            var_1_13
           ))
          ))
         ) : (
                                               ((
           var_1_12
          ) == (
                                                ((double) (
            1.4
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_12
         ) == (
                                               ((double) (
           var_1_13
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_12
        ) == (
                                              ((double) (
          var_1_13
         ))
        ))
       ))
      ))
     ) && (
                                                       ((
                                                              ((
        last_1_var_1_12
       ) < (
        var_1_13
       ))
      ) ? (
                                                        ((
                                                               ((
         last_1_var_1_23
        ) == (
         var_1_5
        ))
       ) ? (
                                                         ((
         var_1_14
        ) == (
                                                          ((unsigned short int) (
          var_1_7
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
                                                 (! (
                                                  ((
        var_1_11
       ) && (
        var_1_10
       ))
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((float) (
                                             ((
         var_1_17
        ) + (
         var_1_18
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
      var_1_23
     ) < (
      var_1_7
     ))
    ) ? (
                                          ((
      var_1_10
     ) ? (
                                           ((
                                                  ((
        var_1_23
       ) >= (
                                                   ((
         var_1_6
        ) % (
         var_1_5
        ))
       ))
      ) ? (
                                            ((
        var_1_19
       ) == (
                                             ((unsigned char) (
         var_1_8
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                           ((
       var_1_19
      ) == (
                                            ((unsigned char) (
        50
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_21
   ) == (
                                         ((float) (
     var_1_13
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_22
  ) == (
                                        ((double) (
    2.7
   ))
  ))
 ))
) && (
                                        ((
  var_1_23
 ) == (
                                         ((signed short int) (
   var_1_14
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

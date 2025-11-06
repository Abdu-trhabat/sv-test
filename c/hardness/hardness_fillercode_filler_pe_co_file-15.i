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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -10;
unsigned char var_1_2 = 0;
signed short int var_1_5 = 2;
signed short int var_1_6 = -32;
signed short int var_1_7 = 10;
signed short int var_1_8 = 64;
signed short int var_1_9 = 256;
signed char var_1_10 = -5;
signed char var_1_11 = 5;
double var_1_12 = 256.4;
double var_1_15 = 32.5;
double var_1_16 = 10000000000.25;
signed char var_1_17 = -5;
unsigned char var_1_18 = 1;
unsigned short int var_1_19 = 64;
unsigned short int var_1_20 = 5;
unsigned long int var_1_21 = 10000000;
unsigned long int var_1_22 = 3445332657;
float var_1_23 = -0.25;
float var_1_24 = 9999999.75;
float var_1_25 = 25.75;
float var_1_26 = 64.25;
signed short int var_1_27 = 10;
unsigned char var_1_28 = 0;
signed short int var_1_29 = -16;
signed short int var_1_30 = 32;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
signed short int var_1_33 = 0;
signed short int var_1_34 = 10;
signed long int var_1_35 = -10;
signed long int var_1_36 = 200;
double var_1_37 = 4.85;
double var_1_38 = 2.5;
double var_1_39 = 15.75;
signed char var_1_40 = -100;
signed char var_1_41 = 1;
signed short int var_1_42 = -32;
signed char var_1_43 = 4;
signed char var_1_44 = -8;
signed short int var_1_45 = -25;
float last_1_var_1_23 = -0.25;
float last_1_var_1_26 = 64.25;
void initially(void) {
}
void step(void) {
                                          if ( ((last_1_var_1_26) >= ( ((last_1_var_1_26) * ( ((last_1_var_1_26) + (last_1_var_1_23))))))) {
                                           var_1_12 = (
                                            ((((( (( var_1_15 ) - ( var_1_16 )) )) < (( -0.85 ))) ? (( (( var_1_15 ) - ( var_1_16 )) )) : (( -0.85 ))))
  );
 } else {
                                           var_1_12 = (
   var_1_16
  );
 }
                               var_1_10 = (
  var_1_11
 );
                                if ( (! (var_1_2))) {
                                 var_1_19 = (
                                  ((
                                   ((((( var_1_7 )) < (( var_1_9 ))) ? (( var_1_7 )) : (( var_1_9 ))))
   ) + (
    var_1_20
   ))
  );
 }
                                if (var_1_18) {
                                 var_1_21 = (
                                  ((
                                   ((((( 3346787891u )) > (( var_1_22 ))) ? (( 3346787891u )) : (( var_1_22 ))))
   ) - (
    var_1_7
   ))
  );
 }
                                if ( ((-1) < (var_1_6))) {
                                 var_1_23 = (
                                  ((((( (( var_1_16 ) - ( ((((( var_1_15 )) < (( var_1_24 ))) ? (( var_1_15 )) : (( var_1_24 )))) )) )) < (( var_1_25 ))) ? (( (( var_1_16 ) - ( ((((( var_1_15 )) < (( var_1_24 ))) ? (( var_1_15 )) : (( var_1_24 )))) )) )) : (( var_1_25 ))))
  );
 } else {
                                 var_1_23 = (
                                  ((((( var_1_15 )) < (( var_1_25 ))) ? (( var_1_15 )) : (( var_1_25 ))))
  );
 }
 unsigned short int stepLocal_2 = var_1_19;
                                if ( ((var_1_15) > (var_1_12))) {
                                 if ( (( (( ((var_1_20) + (var_1_21))) - (var_1_7))) >= (stepLocal_2))) {
                                  if (var_1_2) {
                                   var_1_26 = (
     var_1_15
    );
   } else {
                                   var_1_26 = (
     9.999999999999923E13f
    );
   }
  }
 } else {
                                 var_1_26 = (
   var_1_15
  );
 }
 unsigned char stepLocal_0 = ((var_1_26) > (var_1_12));
                               if ( ((var_1_2) || (stepLocal_0))) {
                                var_1_1 = (
                                 ((
    var_1_5
   ) + (
    var_1_6
   ))
  );
 } else {
                                var_1_1 = (
                                 ((
                                  ((((( (( var_1_7 ) + ( 1 )) )) < (( var_1_8 ))) ? (( (( var_1_7 ) + ( 1 )) )) : (( var_1_8 ))))
   ) - (
                                  ((
     24762
    ) - (
     var_1_9
    ))
   ))
  );
 }
 unsigned char stepLocal_1 = var_1_2;
                                if ( ((var_1_23) <= ( (((((var_1_26)) < ((var_1_12))) ? ((var_1_26)) : ((var_1_12))))))) {
                                 if ( ((stepLocal_1) || (var_1_18))) {
                                  var_1_17 = (
    var_1_11
   );
  } else {
                                  var_1_17 = (
    16
   );
  }
 }
                   if ( (! (var_1_28))) {
                    if (var_1_28) {
                    var_1_27 = (
                     ((((((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 ))))) < 0 ) ? -(((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 ))))) : (((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 )))))))
   );
  } else {
                     if ( ((var_1_29) >= (25))) {
                      if ( (( ((0) > (var_1_29))) || (var_1_31))) {
                      var_1_27 = (
                       ((((((((-50) < 0 ) ? -(-50) : (-50)))) < 0 ) ? -(((((-50) < 0 ) ? -(-50) : (-50)))) : (((((-50) < 0 ) ? -(-50) : (-50))))))
     );
    } else {
                       if (var_1_32) {
                        var_1_27 = (
                         ((
        var_1_33
       ) - (
        var_1_34
       ))
      );
     } else {
                        var_1_27 = (
       var_1_30
      );
     }
    }
   } else {
                      var_1_27 = (
     var_1_29
    );
   }
  }
 }
                   var_1_35 = (
                    ((((( 128 )) < (( ((((( var_1_36 )) > (( (( -5 ) + ( var_1_29 )) ))) ? (( var_1_36 )) : (( (( -5 ) + ( var_1_29 )) )))) ))) ? (( 128 )) : (( ((((( var_1_36 )) > (( (( -5 ) + ( var_1_29 )) ))) ? (( var_1_36 )) : (( (( -5 ) + ( var_1_29 )) )))) ))))
 );
                   if (var_1_28) {
                    var_1_37 = (
                     ((
                      ((((( 4.2 )) < (( var_1_38 ))) ? (( 4.2 )) : (( var_1_38 ))))
   ) - (
                      ((
                       ((
      8.021944736140885E18
     ) - (
      var_1_39
     ))
    ) - (
     16.75
    ))
   ))
  );
 } else {
                    var_1_37 = (
                     ((((( var_1_39 )) > (( var_1_38 ))) ? (( var_1_39 )) : (( var_1_38 ))))
  );
 }
                   var_1_40 = (
  var_1_41
 );
                   if (var_1_32) {
                    var_1_42 = (
                     ((((( ((((( var_1_30 )) < (( var_1_41 ))) ? (( var_1_30 )) : (( var_1_41 )))) )) > (( var_1_33 ))) ? (( ((((( var_1_30 )) < (( var_1_41 ))) ? (( var_1_30 )) : (( var_1_41 )))) )) : (( var_1_33 ))))
  );
 }
                   if ( ((var_1_35) <= (var_1_17))) {
                    var_1_43 = (
                     ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))
  );
 }
                   if ( (( (! (var_1_28))) || (var_1_32))) {
                    var_1_45 = (
   var_1_44
  );
 } else {
                    if ( ((var_1_31) || (var_1_28))) {
                     var_1_45 = (
    var_1_34
   );
  } else {
                     if ( ((4u) >= (var_1_21))) {
                      var_1_45 = (
     var_1_1
    );
   } else {
                      var_1_45 = (
     2
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -16383);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -1);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 32767);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32766);
 assume_abort_if_not(var_1_29 <= 32766);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32766);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -1);
 assume_abort_if_not(var_1_33 <= 32766);
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 32766);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483647);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -127);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -126);
 assume_abort_if_not(var_1_44 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_23 = var_1_23;
 last_1_var_1_26 = var_1_26;
}
int property(void) {
 if ( ((var_1_2) || ( ((var_1_26) > (var_1_12))))) {
 } else {
 }
 if ( ((last_1_var_1_26) >= ( ((last_1_var_1_26) * ( ((last_1_var_1_26) + (last_1_var_1_23))))))) {
 } else {
 }
 if ( ((var_1_23) <= ( (((((var_1_26)) < ((var_1_12))) ? ((var_1_26)) : ((var_1_12))))))) {
  if ( ((var_1_2) || (var_1_18))) {
  } else {
  }
 }
 if ( (! (var_1_2))) {
 }
 if (var_1_18) {
 }
 if ( ((-1) < (var_1_6))) {
 } else {
 }
 if ( ((var_1_15) > (var_1_12))) {
  if ( (( (( ((var_1_20) + (var_1_21))) - (var_1_7))) >= (var_1_19))) {
   if (var_1_2) {
   } else {
   }
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
                                                ((
         var_1_2
        ) || (
                                                 ((
          var_1_26
         ) > (
          var_1_12
         ))
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
                                              ((
           var_1_5
          ) + (
           var_1_6
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
                                              ((
                                               ((((( (( var_1_7 ) + ( 1 )) )) < (( var_1_8 ))) ? (( (( var_1_7 ) + ( 1 )) )) : (( var_1_8 ))))
          ) - (
                                               ((
            24762
           ) - (
            var_1_9
           ))
          ))
         ))
        ))
       ))
      ) && (
                                           ((
        var_1_10
       ) == (
                                            ((signed char) (
         var_1_11
        ))
       ))
      ))
     ) && (
                                                     ((
                                                           ((
        last_1_var_1_26
       ) >= (
                                                            ((
         last_1_var_1_26
        ) * (
                                                             ((
          last_1_var_1_26
         ) + (
          last_1_var_1_23
         ))
        ))
       ))
      ) ? (
                                                      ((
        var_1_12
       ) == (
                                                       ((double) (
                                                        ((((( (( var_1_15 ) - ( var_1_16 )) )) < (( -0.85 ))) ? (( (( var_1_15 ) - ( var_1_16 )) )) : (( -0.85 ))))
        ))
       ))
      ) : (
                                                      ((
        var_1_12
       ) == (
                                                       ((double) (
         var_1_16
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_23
      ) <= (
                                                  ((((( var_1_26 )) < (( var_1_12 ))) ? (( var_1_26 )) : (( var_1_12 ))))
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_2
       ) || (
        var_1_18
       ))
      ) ? (
                                            ((
        var_1_17
       ) == (
                                             ((signed char) (
         var_1_11
        ))
       ))
      ) : (
                                            ((
        var_1_17
       ) == (
                                             ((signed char) (
         16
        ))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                (! (
      var_1_2
     ))
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((unsigned short int) (
                                            ((
                                             ((((( var_1_7 )) < (( var_1_9 ))) ? (( var_1_7 )) : (( var_1_9 ))))
       ) + (
        var_1_20
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_18
   ) ? (
                                         ((
     var_1_21
    ) == (
                                          ((unsigned long int) (
                                           ((
                                            ((((( 3346787891u )) > (( var_1_22 ))) ? (( 3346787891u )) : (( var_1_22 ))))
      ) - (
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
    -1
   ) < (
    var_1_6
   ))
  ) ? (
                                        ((
    var_1_23
   ) == (
                                         ((float) (
                                          ((((( (( var_1_16 ) - ( ((((( var_1_15 )) < (( var_1_24 ))) ? (( var_1_15 )) : (( var_1_24 )))) )) )) < (( var_1_25 ))) ? (( (( var_1_16 ) - ( ((((( var_1_15 )) < (( var_1_24 ))) ? (( var_1_15 )) : (( var_1_24 )))) )) )) : (( var_1_25 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_23
   ) == (
                                         ((float) (
                                          ((((( var_1_15 )) < (( var_1_25 ))) ? (( var_1_15 )) : (( var_1_25 ))))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_15
  ) > (
   var_1_12
  ))
 ) ? (
                                       ((
                                              ((
                                               ((
                                                ((
      var_1_20
     ) + (
      var_1_21
     ))
    ) - (
     var_1_7
    ))
   ) >= (
    var_1_19
   ))
  ) ? (
                                        ((
    var_1_2
   ) ? (
                                         ((
     var_1_26
    ) == (
                                          ((float) (
      var_1_15
     ))
    ))
   ) : (
                                         ((
     var_1_26
    ) == (
                                          ((float) (
      9.999999999999923E13f
     ))
    ))
   ))
  ) : (
   1
  ))
 ) : (
                                       ((
   var_1_26
  ) == (
                                        ((float) (
    var_1_15
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

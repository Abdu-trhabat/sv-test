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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -50;
signed char var_1_2 = -5;
signed char var_1_3 = -4;
signed char var_1_4 = -2;
unsigned short int var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 256;
signed long int var_1_10 = 2;
signed long int var_1_11 = 1000000000;
unsigned long int var_1_12 = 1;
unsigned long int var_1_13 = 3902113393;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 10;
unsigned short int var_1_17 = 1;
signed char var_1_18 = 64;
unsigned short int var_1_19 = 64352;
signed long int var_1_20 = 10000000;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 1;
unsigned long int var_1_23 = 0;
unsigned char var_1_24 = 128;
unsigned short int var_1_25 = 1;
unsigned char var_1_26 = 64;
unsigned short int var_1_27 = 128;
unsigned short int var_1_28 = 64514;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
signed long int var_1_31 = -128;
float var_1_32 = 50.5;
float var_1_33 = 256.5;
float var_1_34 = 49.15;
float var_1_35 = 10.5;
float var_1_36 = 5.2;
float var_1_37 = 3.75;
unsigned char var_1_38 = 1;
double var_1_39 = 15.5;
double var_1_40 = 127.5;
double var_1_41 = 63.6;
double var_1_42 = 49.75;
double var_1_43 = 64.25;
unsigned char var_1_44 = 1;
signed long int last_1_var_1_20 = 10000000;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = (( ((var_1_19) - (var_1_16))) - ( (((((var_1_18)) < ((32))) ? ((var_1_18)) : ((32))))));
 signed char stepLocal_3 = var_1_2;
                                           if ( ((stepLocal_3) > ( (( ((64) - (var_1_18))) - (var_1_16))))) {
                                            if ( ((stepLocal_4) >= ( (((((last_1_var_1_20)) < (( ((var_1_8) / (var_1_11))))) ? ((last_1_var_1_20)) : (( ((var_1_8) / (var_1_11))))))))) {
                                             var_1_17 = (
    var_1_9
   );
  }
 } else {
                                            var_1_17 = (
   var_1_9
  );
 }
             if ( (( ((((( ((var_1_32) / (var_1_33)))) > ((var_1_34))) ? (( ((var_1_32) / (var_1_33)))) : ((var_1_34))))) >= ( ((var_1_35) * ( ((var_1_36) * (var_1_37))))))) {
              var_1_31 = (
               ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
  );
 }
             var_1_44 = (
  var_1_30
 );
                                var_1_20 = (
  var_1_17
 );
             if ( ((var_1_25) != (var_1_23))) {
              if (var_1_22) {
               var_1_27 = (
    var_1_26
   );
  } else {
               var_1_27 = (
                (((((( var_1_28 ) - ( var_1_21 ))) < 0 ) ? -((( var_1_28 ) - ( var_1_21 ))) : ((( var_1_28 ) - ( var_1_21 )))))
   );
  }
 }
                              var_1_1 = (
                               ((((( 8 )) < (( (( var_1_2 ) + ( (( var_1_3 ) + ( var_1_4 )) )) ))) ? (( 8 )) : (( (( var_1_2 ) + ( (( var_1_3 ) + ( var_1_4 )) )) ))))
 );
             if (var_1_22) {
              if ( ((var_1_27) >= (var_1_28))) {
               var_1_29 = (
                ((
                 ((
      var_1_28
     ) > (
                  ((
       var_1_25
      ) & (
       2
      ))
     ))
    ) || (
     var_1_30
    ))
   );
  } else {
               var_1_29 = (
    var_1_30
   );
  }
 }
             if (var_1_38) {
              var_1_39 = (
               ((
                ((
     9.5
    ) - (
     var_1_40
    ))
   ) + (
                ((
     3.375
    ) + (
     var_1_41
    ))
   ))
  );
 } else {
              var_1_39 = (
               ((((( var_1_40 )) > (( (( var_1_42 ) - ( var_1_43 )) ))) ? (( var_1_40 )) : (( (( var_1_42 ) - ( var_1_43 )) ))))
  );
 }
 unsigned short int stepLocal_1 = var_1_8;
 signed long int stepLocal_0 = (((((var_1_8)) > ((var_1_20))) ? ((var_1_8)) : ((var_1_20))));
                               if ( ((stepLocal_1) > (var_1_20))) {
                                if (var_1_6) {
                                if ( ((var_1_9) <= (stepLocal_0))) {
                                 var_1_10 = (
     var_1_20
    );
   } else {
                                 var_1_10 = (
                                  ((
                                   ((
       var_1_20
      ) - (
                                    ((
        var_1_11
       ) - (
        var_1_8
       ))
      ))
     ) + (
      16
     ))
    );
   }
  } else {
                                 var_1_10 = (
    var_1_8
   );
  }
 } else {
                                var_1_10 = (
   var_1_20
  );
 }
 signed long int stepLocal_2 = var_1_10;
                               if ( ((stepLocal_2) > (var_1_9))) {
                                if (var_1_6) {
                                 var_1_12 = (
                                  ((
     var_1_13
    ) - (
                                   ((((( var_1_11 )) > (( var_1_9 ))) ? (( var_1_11 )) : (( var_1_9 ))))
    ))
   );
  }
 } else {
                                var_1_12 = (
   var_1_8
  );
 }
             if (var_1_22) {
              var_1_38 = (
   0
  );
 }
                               if ( ((var_1_6) && (var_1_15))) {
                                var_1_14 = (
                                 ((
                                  ((
     64
    ) - (
     4
    ))
   ) + (
    var_1_16
   ))
  );
 }
            if ( ((8u) < ( ((((((var_1_23) * (2u))) < 0 ) ? -(((var_1_23) * (2u))) : (((var_1_23) * (2u)))))))) {
             var_1_21 = (
   var_1_24
  );
 }
                              if ( ((var_1_6) && ( (( ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) != (var_1_4))))) {
                               var_1_5 = (
                                ((((( var_1_8 )) > (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
  );
 } else {
                               var_1_5 = (
   var_1_9
  );
 }
             if ( (( (( ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))) * ( ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) < (var_1_21))) {
              if ( (( ((var_1_21) % (var_1_26))) > (var_1_24))) {
               var_1_25 = (
    var_1_24
   );
  } else {
               var_1_25 = (
    8
   );
  }
 } else {
              var_1_25 = (
   var_1_26
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -63);
 assume_abort_if_not(var_1_2 <= 63);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -31);
 assume_abort_if_not(var_1_3 <= 32);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -31);
 assume_abort_if_not(var_1_4 <= 31);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 536870911);
 assume_abort_if_not(var_1_11 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 64);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 49151);
 assume_abort_if_not(var_1_19 <= 65535);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 254);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 255);
 assume_abort_if_not(var_1_26 != 0);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 32767);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 assume_abort_if_not(var_1_33 != 0.0F);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( ((var_1_6) && ( (( ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) != (var_1_4))))) {
 } else {
 }
 if ( ((var_1_8) > (var_1_20))) {
  if (var_1_6) {
   if ( ((var_1_9) <= ( (((((var_1_8)) > ((var_1_20))) ? ((var_1_8)) : ((var_1_20))))))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_10) > (var_1_9))) {
  if (var_1_6) {
  }
 } else {
 }
 if ( ((var_1_6) && (var_1_15))) {
 }
 if ( ((var_1_2) > ( (( ((64) - (var_1_18))) - (var_1_16))))) {
  if ( (( (( ((var_1_19) - (var_1_16))) - ( (((((var_1_18)) < ((32))) ? ((var_1_18)) : ((32))))))) >= ( (((((last_1_var_1_20)) < (( ((var_1_8) / (var_1_11))))) ? ((last_1_var_1_20)) : (( ((var_1_8) / (var_1_11))))))))) {
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
       var_1_1
      ) == (
                                           ((signed char) (
                                            ((((( 8 )) < (( (( var_1_2 ) + ( (( var_1_3 ) + ( var_1_4 )) )) ))) ? (( 8 )) : (( (( var_1_2 ) + ( (( var_1_3 ) + ( var_1_4 )) )) ))))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_6
       ) && (
                                                 ((
                                                  ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))
        ) != (
         var_1_4
        ))
       ))
      ) ? (
                                           ((
        var_1_5
       ) == (
                                            ((unsigned short int) (
                                             ((((( var_1_8 )) > (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
        ))
       ))
      ) : (
                                           ((
        var_1_5
       ) == (
                                            ((unsigned short int) (
         var_1_9
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
       var_1_8
      ) > (
       var_1_20
      ))
     ) ? (
                                           ((
       var_1_6
      ) ? (
                                            ((
                                                 ((
         var_1_9
        ) <= (
                                                  ((((( var_1_8 )) > (( var_1_20 ))) ? (( var_1_8 )) : (( var_1_20 ))))
        ))
       ) ? (
                                            ((
         var_1_10
        ) == (
                                             ((signed long int) (
          var_1_20
         ))
        ))
       ) : (
                                            ((
         var_1_10
        ) == (
                                             ((signed long int) (
                                              ((
                                               ((
            var_1_20
           ) - (
                                                ((
             var_1_11
            ) - (
             var_1_8
            ))
           ))
          ) + (
           16
          ))
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_10
       ) == (
                                             ((signed long int) (
         var_1_8
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_10
      ) == (
                                            ((signed long int) (
        var_1_20
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_10
     ) > (
      var_1_9
     ))
    ) ? (
                                          ((
      var_1_6
     ) ? (
                                           ((
       var_1_12
      ) == (
                                            ((unsigned long int) (
                                             ((
         var_1_13
        ) - (
                                              ((((( var_1_11 )) > (( var_1_9 ))) ? (( var_1_11 )) : (( var_1_9 ))))
        ))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_12
     ) == (
                                           ((unsigned long int) (
       var_1_8
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_6
    ) && (
     var_1_15
    ))
   ) ? (
                                         ((
     var_1_14
    ) == (
                                          ((unsigned char) (
                                           ((
                                            ((
        64
       ) - (
        4
       ))
      ) + (
       var_1_16
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
    var_1_2
   ) > (
                                                          ((
                                                           ((
      64
     ) - (
      var_1_18
     ))
    ) - (
     var_1_16
    ))
   ))
  ) ? (
                                                   ((
                                                          ((
                                                           ((
                                                            ((
       var_1_19
      ) - (
       var_1_16
      ))
     ) - (
                                                            ((((( var_1_18 )) < (( 32 ))) ? (( var_1_18 )) : (( 32 ))))
     ))
    ) >= (
                                                           ((((( last_1_var_1_20 )) < (( (( var_1_8 ) / ( var_1_11 )) ))) ? (( last_1_var_1_20 )) : (( (( var_1_8 ) / ( var_1_11 )) ))))
    ))
   ) ? (
                                                    ((
     var_1_17
    ) == (
                                                     ((unsigned short int) (
      var_1_9
     ))
    ))
   ) : (
    1
   ))
  ) : (
                                                   ((
    var_1_17
   ) == (
                                                    ((unsigned short int) (
     var_1_9
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_20
 ) == (
                                       ((signed long int) (
   var_1_17
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_4 = 10;
signed long int var_1_6 = 256;
double var_1_7 = 99999.875;
double var_1_8 = 3.6;
double var_1_9 = 15.6;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
double var_1_14 = 15.5;
double var_1_15 = 15.5;
double var_1_16 = 31.6;
unsigned char var_1_17 = 1;
signed long int var_1_18 = 5;
signed long int var_1_19 = 1000000000;
signed long int var_1_20 = 128;
unsigned char var_1_21 = 25;
unsigned char var_1_22 = 32;
unsigned char var_1_23 = 50;
double var_1_24 = 64.44;
double var_1_25 = 1.25;
double var_1_26 = 9.8;
double var_1_27 = 8.125;
signed short int var_1_28 = 2;
signed short int var_1_29 = 128;
signed long int var_1_30 = 1;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 4;
unsigned long int var_1_33 = 5;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 32;
unsigned long int var_1_36 = 8;
signed long int var_1_37 = -256;
signed long int var_1_38 = 256;
unsigned long int var_1_39 = 10;
double var_1_40 = 3.6;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 2;
unsigned long int var_1_43 = 5;
signed short int var_1_44 = -128;
signed long int var_1_45 = -32;
unsigned char var_1_46 = 0;
signed short int var_1_47 = 5;
signed long int last_1_var_1_18 = 5;
unsigned char last_1_var_1_21 = 25;
void initially(void) {
}
void step(void) {
            if ( (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) < (var_1_33))) {
             if (var_1_34) {
              var_1_31 = (
               ((
                ((((( var_1_35 )) > (( ((((5u) < 0 ) ? -(5u) : (5u))) ))) ? (( var_1_35 )) : (( ((((5u) < 0 ) ? -(5u) : (5u))) ))))
    ) + (
     var_1_36
    ))
   );
  }
 }
            var_1_37 = (
  var_1_38
 );
             if ( (( ((((4.2) < 0 ) ? -(4.2) : (4.2)))) <= (var_1_40))) {
              if ( ((var_1_31) > (8u))) {
               var_1_39 = (
    var_1_35
   );
  } else {
               var_1_39 = (
                ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))
   );
  }
 }
             if ( ((var_1_39) >= ( (((((var_1_32)) > (( ((var_1_36) >> (16))))) ? ((var_1_32)) : (( ((var_1_36) >> (16))))))))) {
              if ( (( (- (var_1_37))) > ( ((var_1_36) + (var_1_39))))) {
               var_1_41 = (
    var_1_42
   );
  }
 }
             if ( ((var_1_37) > (var_1_33))) {
              if ( (( (((((8.5f)) < ((16.4f))) ? ((8.5f)) : ((16.4f))))) > (var_1_40))) {
               if ( ((var_1_42) <= (var_1_32))) {
                var_1_43 = (
                 ((((((((( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) > (( var_1_35 ))) ? (( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) : (( var_1_35 ))))) < 0 ) ? -(((((( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) > (( var_1_35 ))) ? (( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) : (( var_1_35 ))))) : (((((( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) > (( var_1_35 ))) ? (( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) : (( var_1_35 )))))))
    );
   }
  }
 } else {
              var_1_43 = (
   var_1_42
  );
 }
             if ( ((var_1_35) >= ( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) {
              var_1_44 = (
   var_1_42
  );
 }
             if (var_1_34) {
              var_1_45 = (
               ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))
  );
 } else {
              var_1_45 = (
               (((((( var_1_44 ) + ( var_1_41 ))) < 0 ) ? -((( var_1_44 ) + ( var_1_41 ))) : ((( var_1_44 ) + ( var_1_41 )))))
  );
 }
             var_1_46 = (
  0
 );
             var_1_47 = (
  var_1_41
 );
                                         if ( (( ((last_1_var_1_21) / (var_1_4))) >= ( (((((last_1_var_1_18)) < (( ((32) - (var_1_6))))) ? ((last_1_var_1_18)) : (( ((32) - (var_1_6))))))))) {
                                           var_1_1 = (
   last_1_var_1_21
  );
 } else {
                                           var_1_1 = (
   var_1_4
  );
 }
                                var_1_30 = (
  var_1_1
 );
                               var_1_7 = (
                                ((
   var_1_8
  ) + (
                                 ((((( ((((99.4) < 0 ) ? -(99.4) : (99.4))) )) < (( var_1_9 ))) ? (( ((((99.4) < 0 ) ? -(99.4) : (99.4))) )) : (( var_1_9 ))))
  ))
 );
                                var_1_14 = (
                                 ((
                                  ((((( var_1_8 )) > (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
  ) + (
                                  ((
    var_1_15
   ) + (
                                   ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))
   ))
  ))
 );
                                var_1_17 = (
                                 (! (
   var_1_13
  ))
 );
 signed long int stepLocal_2 = var_1_20;
                                if ( ((stepLocal_2) == (var_1_6))) {
                                 var_1_24 = (
                                  ((
    var_1_25
   ) - (
                                   ((
     var_1_26
    ) + (
     var_1_27
    ))
   ))
  );
 } else {
                                 var_1_24 = (
                                  ((((( (( var_1_9 ) + ( var_1_8 )) )) > (( (( var_1_27 ) + ( var_1_26 )) ))) ? (( (( var_1_9 ) + ( var_1_8 )) )) : (( (( var_1_27 ) + ( var_1_26 )) ))))
  );
 }
                                var_1_28 = (
  var_1_4
 );
                                var_1_29 = (
  var_1_23
 );
 signed long int stepLocal_0 = var_1_6;
                                if ( ((stepLocal_0) != (var_1_29))) {
                                 var_1_18 = (
                                  ((
    -500
   ) + (
    var_1_4
   ))
  );
 } else {
                                 var_1_18 = (
                                  ((
    var_1_4
   ) - (
                                   ((
     last_1_var_1_18
    ) + (
                                    ((
      var_1_19
     ) - (
      var_1_20
     ))
    ))
   ))
  );
 }
                               if ( ((var_1_29) > (var_1_18))) {
                                if ( ((var_1_2) || (var_1_12))) {
                                 var_1_10 = (
    var_1_13
   );
  }
 }
 signed long int stepLocal_1 = var_1_30;
                                if ( ((var_1_8) < (var_1_14))) {
                                 if ( ((var_1_28) <= (stepLocal_1))) {
                                  var_1_21 = (
                                   ((((( var_1_22 )) > (( var_1_23 ))) ? (( var_1_22 )) : (( var_1_23 ))))
   );
  }
 } else {
                                 var_1_21 = (
   var_1_22
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 255);
 assume_abort_if_not(var_1_4 != 0);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 536870911);
 assume_abort_if_not(var_1_19 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 536870911);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -2147483647);
 assume_abort_if_not(var_1_38 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 254);
}
void updateLastVariables(void) {
 last_1_var_1_18 = var_1_18;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 if ( (( ((last_1_var_1_21) / (var_1_4))) >= ( (((((last_1_var_1_18)) < (( ((32) - (var_1_6))))) ? ((last_1_var_1_18)) : (( ((32) - (var_1_6))))))))) {
 } else {
 }
 if ( ((var_1_29) > (var_1_18))) {
  if ( ((var_1_2) || (var_1_12))) {
  }
 }
 if ( ((var_1_6) != (var_1_29))) {
 } else {
 }
 if ( ((var_1_8) < (var_1_14))) {
  if ( ((var_1_28) <= (var_1_30))) {
  }
 } else {
 }
 if ( ((var_1_20) == (var_1_6))) {
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
                     ((
                                                         ((
                                                               ((
                                                               ((
             last_1_var_1_21
            ) / (
             var_1_4
            ))
           ) >= (
                                                                ((((( last_1_var_1_18 )) < (( (( 32 ) - ( var_1_6 )) ))) ? (( last_1_var_1_18 )) : (( (( 32 ) - ( var_1_6 )) ))))
           ))
          ) ? (
                                                          ((
            var_1_1
           ) == (
                                                           ((signed short int) (
             last_1_var_1_21
            ))
           ))
          ) : (
                                                          ((
            var_1_1
           ) == (
                                                           ((signed short int) (
             var_1_4
            ))
           ))
          ))
         ) && (
                                              ((
           var_1_7
          ) == (
                                               ((double) (
                                                ((
             var_1_8
            ) + (
                                                 ((((( ((((99.4) < 0 ) ? -(99.4) : (99.4))) )) < (( var_1_9 ))) ? (( ((((99.4) < 0 ) ? -(99.4) : (99.4))) )) : (( var_1_9 ))))
            ))
           ))
          ))
         ))
        ) && (
                                             ((
                                                   ((
           var_1_29
          ) > (
           var_1_18
          ))
         ) ? (
                                              ((
                                                    ((
            var_1_2
           ) || (
            var_1_12
           ))
          ) ? (
                                               ((
            var_1_10
           ) == (
                                                ((unsigned char) (
             var_1_13
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
         var_1_14
        ) == (
                                              ((double) (
                                               ((
                                                ((((( var_1_8 )) > (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
          ) + (
                                                ((
            var_1_15
           ) + (
                                                 ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))
           ))
          ))
         ))
        ))
       ))
      ) && (
                                            ((
        var_1_17
       ) == (
                                             ((unsigned char) (
                                              (! (
          var_1_13
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_6
       ) != (
        var_1_29
       ))
      ) ? (
                                            ((
        var_1_18
       ) == (
                                             ((signed long int) (
                                              ((
          -500
         ) + (
          var_1_4
         ))
        ))
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
           last_1_var_1_18
          ) + (
                                                ((
            var_1_19
           ) - (
            var_1_20
           ))
          ))
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_8
      ) < (
       var_1_14
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_28
       ) <= (
        var_1_30
       ))
      ) ? (
                                            ((
        var_1_21
       ) == (
                                             ((unsigned char) (
                                              ((((( var_1_22 )) > (( var_1_23 ))) ? (( var_1_22 )) : (( var_1_23 ))))
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                           ((
       var_1_21
      ) == (
                                            ((unsigned char) (
        var_1_22
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_20
     ) == (
      var_1_6
     ))
    ) ? (
                                          ((
      var_1_24
     ) == (
                                           ((double) (
                                            ((
        var_1_25
       ) - (
                                             ((
         var_1_26
        ) + (
         var_1_27
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_24
     ) == (
                                           ((double) (
                                            ((((( (( var_1_9 ) + ( var_1_8 )) )) > (( (( var_1_27 ) + ( var_1_26 )) ))) ? (( (( var_1_9 ) + ( var_1_8 )) )) : (( (( var_1_27 ) + ( var_1_26 )) ))))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_28
   ) == (
                                         ((signed short int) (
     var_1_4
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_29
  ) == (
                                        ((signed short int) (
    var_1_23
   ))
  ))
 ))
) && (
                                      ((
  var_1_30
 ) == (
                                       ((signed long int) (
   var_1_1
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

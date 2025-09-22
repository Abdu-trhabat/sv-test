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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -2;
signed char var_1_3 = 25;
signed char var_1_4 = 50;
signed char var_1_5 = -25;
double var_1_6 = 1.5;
double var_1_7 = 24.625;
double var_1_8 = 0.75;
unsigned char var_1_9 = 10;
unsigned char var_1_10 = 50;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 2;
unsigned short int var_1_17 = 28938;
unsigned short int var_1_18 = 23710;
unsigned short int var_1_19 = 64;
unsigned char var_1_20 = 0;
signed char var_1_21 = 4;
unsigned long int var_1_22 = 8;
unsigned long int var_1_23 = 8;
signed char var_1_24 = 16;
signed short int var_1_25 = 100;
unsigned long int var_1_26 = 0;
float var_1_27 = 15.5;
float var_1_30 = 5.25;
float var_1_31 = 127.25;
double var_1_32 = 25.25;
double var_1_33 = 99999.76;
signed char var_1_34 = 16;
signed short int var_1_35 = 16;
signed short int var_1_36 = 4;
signed char var_1_37 = 50;
float var_1_38 = 31.2;
signed short int var_1_39 = -2;
unsigned long int var_1_40 = 3050730359;
unsigned long int var_1_41 = 2554258282;
void initially(void) {
}
void step(void) {
                              if ( (( ((var_1_6) * (var_1_7))) < ( (- (var_1_8))))) {
                               var_1_5 = (
   var_1_3
  );
 }
                              var_1_9 = (
                               ((
   var_1_4
  ) + (
   var_1_10
  ))
 );
                  if ( (( ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) < 0 ) ? -(((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))) < (var_1_23))) {
                   var_1_21 = (
   var_1_24
  );
 }
                  if ( ((var_1_22) < (var_1_23))) {
                   if ( ((var_1_23) < ( ((var_1_22) ^ (var_1_26))))) {
                    var_1_25 = (
    var_1_5
   );
  }
 }
                               if ( (( ((var_1_7) * ( (- (var_1_6))))) <= ( ((4.25) * (var_1_8))))) {
                                var_1_13 = (
                                 ((
    var_1_12
   ) && (
    var_1_14
   ))
  );
 }
 signed long int stepLocal_1 = 500;
                               if ( ((stepLocal_1) != ( ((var_1_10) >> (var_1_16))))) {
                                var_1_15 = (
                                 ((((( (( (( var_1_17 ) - ( var_1_9 )) ) + ( (( var_1_18 ) - ( var_1_4 )) )) )) < (( ((((( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) > (( (( 128 ) + ( var_1_19 )) ))) ? (( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) : (( (( 128 ) + ( var_1_19 )) )))) ))) ? (( (( (( var_1_17 ) - ( var_1_9 )) ) + ( (( var_1_18 ) - ( var_1_4 )) )) )) : (( ((((( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) > (( (( 128 ) + ( var_1_19 )) ))) ? (( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) : (( (( 128 ) + ( var_1_19 )) )))) ))))
  );
 } else {
                                var_1_15 = (
   var_1_4
  );
 }
                  if ( ((var_1_15) <= (var_1_26))) {
                   if (var_1_11) {
                    var_1_27 = (
                     ((((( var_1_30 )) < (( var_1_31 ))) ? (( var_1_30 )) : (( var_1_31 ))))
   );
  }
 }
                   if ( ((var_1_15) > ( ((32) - (var_1_35))))) {
                    var_1_38 = (
                     ((((((((( var_1_33 )) > (( var_1_30 ))) ? (( var_1_33 )) : (( var_1_30 ))))) < 0 ) ? -(((((( var_1_33 )) > (( var_1_30 ))) ? (( var_1_33 )) : (( var_1_30 ))))) : (((((( var_1_33 )) > (( var_1_30 ))) ? (( var_1_33 )) : (( var_1_30 )))))))
  );
 }
                   if ( ((var_1_23) <= ( (( (((((var_1_40)) < ((var_1_41))) ? ((var_1_40)) : ((var_1_41))))) - (var_1_37))))) {
                    var_1_39 = (
                     ((
    var_1_9
   ) + (
    -8
   ))
  );
 }
 signed long int stepLocal_3 = ((var_1_15) / (-2));
 unsigned char stepLocal_2 = ((var_1_18) > ( ((var_1_4) % (var_1_16))));
                               if ( ((var_1_13) && (stepLocal_2))) {
                                if ( (( (( ((var_1_3) - (var_1_16))) * (var_1_5))) > (stepLocal_3))) {
                                 var_1_20 = (
                                  ((
                                   ((
      var_1_17
     ) >= (
      var_1_10
     ))
    ) && (
     var_1_14
    ))
   );
  } else {
                                 var_1_20 = (
    var_1_12
   );
  }
 }
                   if ( (( (~ (var_1_15))) > (var_1_26))) {
                    var_1_32 = (
                     (((((( var_1_33 ) - ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) ))) < 0 ) ? -((( var_1_33 ) - ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) ))) : ((( var_1_33 ) - ( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )))))
  );
 }
                   if ( (( ((var_1_30) / (7.5f))) > ( (- (var_1_27))))) {
                    if (var_1_20) {
                     if ( ((var_1_23) < ( ((var_1_22) >> ( ((var_1_35) - (var_1_36))))))) {
                      var_1_34 = (
                       ((((( ((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) < (( var_1_24 ))) ? (( ((((( var_1_35 )) < (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) : (( var_1_24 ))))
    );
   } else {
                      var_1_34 = (
                       ((
      var_1_35
     ) - (
                        ((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))
     ))
    );
   }
  }
 }
 signed char stepLocal_0 = var_1_4;
                              if (var_1_13) {
                               var_1_1 = (
                               ((
    var_1_3
   ) - (
    var_1_4
   ))
  );
 } else {
                               if ( ((stepLocal_0) <= (var_1_3))) {
                                var_1_1 = (
    var_1_4
   );
  }
 }
                              if ( ((var_1_15) > (var_1_1))) {
                               var_1_11 = (
                                (! (
                                 (! (
     var_1_12
    ))
   ))
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 126);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 1);
 assume_abort_if_not(var_1_16 <= 7);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 16383);
 assume_abort_if_not(var_1_17 <= 32767);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 16383);
 assume_abort_if_not(var_1_18 <= 32767);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32767);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -127);
 assume_abort_if_not(var_1_24 <= 126);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= 16);
 assume_abort_if_not(var_1_35 <= 31);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 15);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 126);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967295);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 2147483647);
 assume_abort_if_not(var_1_41 <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_13) {
 } else {
  if ( ((var_1_4) <= (var_1_3))) {
  }
 }
 if ( (( ((var_1_6) * (var_1_7))) < ( (- (var_1_8))))) {
 }
 if ( ((var_1_15) > (var_1_1))) {
 }
 if ( (( ((var_1_7) * ( (- (var_1_6))))) <= ( ((4.25) * (var_1_8))))) {
 }
 if ( ((500) != ( ((var_1_10) >> (var_1_16))))) {
 } else {
 }
 if ( ((var_1_13) && ( ((var_1_18) > ( ((var_1_4) % (var_1_16))))))) {
  if ( (( (( ((var_1_3) - (var_1_16))) * (var_1_5))) > ( ((var_1_15) / (-2))))) {
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
       var_1_13
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((signed char) (
                                           ((
          var_1_3
         ) - (
          var_1_4
         ))
        ))
       ))
      ) : (
                                          ((
                                                ((
         var_1_4
        ) <= (
         var_1_3
        ))
       ) ? (
                                           ((
         var_1_1
        ) == (
                                            ((signed char) (
          var_1_4
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
         var_1_6
        ) * (
         var_1_7
        ))
       ) < (
                                                (- (
         var_1_8
        ))
       ))
      ) ? (
                                          ((
        var_1_5
       ) == (
                                           ((signed char) (
         var_1_3
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                        ((
      var_1_9
     ) == (
                                         ((unsigned char) (
                                          ((
        var_1_4
       ) + (
        var_1_10
       ))
      ))
     ))
    ))
   ) && (
                                       ((
                                             ((
      var_1_15
     ) > (
      var_1_1
     ))
    ) ? (
                                        ((
      var_1_11
     ) == (
                                         ((unsigned char) (
                                          (! (
                                           (! (
         var_1_12
        ))
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
      var_1_7
     ) * (
                                               (- (
       var_1_6
      ))
     ))
    ) <= (
                                               ((
      4.25
     ) * (
      var_1_8
     ))
    ))
   ) ? (
                                        ((
     var_1_13
    ) == (
                                         ((unsigned char) (
                                          ((
       var_1_12
      ) && (
       var_1_14
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
    500
   ) != (
                                              ((
     var_1_10
    ) >> (
     var_1_16
    ))
   ))
  ) ? (
                                       ((
    var_1_15
   ) == (
                                        ((unsigned short int) (
                                         ((((( (( (( var_1_17 ) - ( var_1_9 )) ) + ( (( var_1_18 ) - ( var_1_4 )) )) )) < (( ((((( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) > (( (( 128 ) + ( var_1_19 )) ))) ? (( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) : (( (( 128 ) + ( var_1_19 )) )))) ))) ? (( (( (( var_1_17 ) - ( var_1_9 )) ) + ( (( var_1_18 ) - ( var_1_4 )) )) )) : (( ((((( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) > (( (( 128 ) + ( var_1_19 )) ))) ? (( ((((( var_1_10 )) < (( var_1_16 ))) ? (( var_1_10 )) : (( var_1_16 )))) )) : (( (( 128 ) + ( var_1_19 )) )))) ))))
    ))
   ))
  ) : (
                                       ((
    var_1_15
   ) == (
                                        ((unsigned short int) (
     var_1_4
    ))
   ))
  ))
 ))
) && (
                                     ((
                                            ((
   var_1_13
  ) && (
                                             ((
    var_1_18
   ) > (
                                              ((
     var_1_4
    ) % (
     var_1_16
    ))
   ))
  ))
 ) ? (
                                      ((
                                             ((
                                              ((
                                               ((
      var_1_3
     ) - (
      var_1_16
     ))
    ) * (
     var_1_5
    ))
   ) > (
                                               ((
     var_1_15
    ) / (
     -2
    ))
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned char) (
                                          ((
                                           ((
       var_1_17
      ) >= (
       var_1_10
      ))
     ) && (
      var_1_14
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned char) (
     var_1_12
    ))
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

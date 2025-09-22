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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 10;
unsigned char var_1_5 = 50;
unsigned char var_1_6 = 8;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 4;
unsigned char var_1_10 = 32;
unsigned short int var_1_11 = 10;
unsigned char var_1_12 = 2;
unsigned short int var_1_13 = 0;
unsigned short int var_1_14 = 17724;
unsigned short int var_1_15 = 32612;
unsigned long int var_1_16 = 8;
double var_1_17 = 1.6;
double var_1_18 = 63.4;
signed long int var_1_19 = 200;
signed long int var_1_20 = -10;
signed char var_1_21 = 2;
unsigned char var_1_22 = 1;
double var_1_23 = 8.2;
signed char var_1_24 = 8;
signed char var_1_25 = 32;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned long int var_1_28 = 4;
unsigned long int var_1_29 = 100;
unsigned long int var_1_30 = 32;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 2;
signed short int var_1_33 = 5;
signed char var_1_34 = 2;
double var_1_35 = 9999999999999.5;
signed short int var_1_36 = 2;
signed short int var_1_37 = 18544;
signed char var_1_38 = -50;
unsigned char last_1_var_1_1 = 10;
unsigned short int last_1_var_1_11 = 10;
unsigned char last_1_var_1_12 = 2;
unsigned short int last_1_var_1_13 = 0;
unsigned long int last_1_var_1_16 = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_3 = (((((var_1_9)) > (( ((last_1_var_1_13) + (last_1_var_1_1))))) ? ((var_1_9)) : (( ((last_1_var_1_13) + (last_1_var_1_1))))));
                                            if ( (( (((((last_1_var_1_13)) < ((last_1_var_1_11))) ? ((last_1_var_1_13)) : ((last_1_var_1_11))))) > (stepLocal_3))) {
                                            var_1_12 = (
   var_1_5
  );
 } else {
                                             var_1_12 = (
   var_1_9
  );
 }
             if ( ((var_1_21) >= (var_1_29))) {
              var_1_36 = (
   -8
  );
 } else {
              var_1_36 = (
               ((
                ((
     var_1_37
    ) - (
     var_1_32
    ))
   ) - (
                ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))
   ))
  );
 }
             if ( (( ((var_1_29) / (var_1_37))) <= (var_1_28))) {
              var_1_38 = (
               ((
    var_1_25
   ) + (
    var_1_24
   ))
  );
 } else {
              var_1_38 = (
   var_1_25
  );
 }
 unsigned char stepLocal_2 = var_1_10;
 unsigned char stepLocal_1 = var_1_7;
 unsigned char stepLocal_0 = var_1_10;
                                           if ( ((stepLocal_2) > ( ((var_1_5) + (last_1_var_1_12))))) {
                                            if ( (( (( (- (last_1_var_1_1))) < (last_1_var_1_16))) && (stepLocal_1))) {
                                             if ( ((stepLocal_0) <= (last_1_var_1_12))) {
                                              var_1_11 = (
     var_1_10
    );
   }
  } else {
                                             var_1_11 = (
    var_1_9
   );
  }
 } else {
                                            var_1_11 = (
   var_1_5
  );
 }
             if ( (! (var_1_22))) {
              var_1_28 = (
   var_1_29
  );
 } else {
              var_1_28 = (
               ((((((((( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) > (( var_1_30 ))) ? (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) : (( var_1_30 ))))) < 0 ) ? -(((((( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) > (( var_1_30 ))) ? (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) : (( var_1_30 ))))) : (((((( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) > (( var_1_30 ))) ? (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) )) : (( var_1_30 )))))))
  );
 }
                                if ( ((var_1_11) != (var_1_15))) {
                                 if ( (! ( ((last_1_var_1_16) != (var_1_12))))) {
                                  var_1_16 = (
    1000u
   );
  }
 }
             if (var_1_22) {
              var_1_31 = (
   0
  );
 }
                               if (var_1_7) {
                                if ( ((var_1_8) && ( ((var_1_16) <= (var_1_11))))) {
                                 var_1_6 = (
                                  ((
     128
    ) - (
                                   ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 ))))
    ))
   );
  } else {
                                 var_1_6 = (
    var_1_10
   );
  }
 }
             if (var_1_26) {
              var_1_35 = (
               ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))
  );
 }
                              if ( ((var_1_6) > ( ((var_1_11) * (var_1_16))))) {
                               var_1_1 = (
                                ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
  );
 } else {
                               if ( ((var_1_6) < (2))) {
                                var_1_1 = (
    var_1_5
   );
  } else {
                                if ( ((var_1_6) < (var_1_11))) {
                                 var_1_1 = (
     var_1_5
    );
   } else {
                                 var_1_1 = (
     25
    );
   }
  }
 }
             var_1_17 = (
  var_1_18
 );
 unsigned char stepLocal_4 = var_1_12;
                                if ( ((1) < (stepLocal_4))) {
                                 var_1_13 = (
                                  ((((( (( (( var_1_14 ) + ( var_1_15 )) ) - ( var_1_6 )) )) > (( 100 ))) ? (( (( (( var_1_14 ) + ( var_1_15 )) ) - ( var_1_6 )) )) : (( 100 ))))
  );
 }
             var_1_19 = (
  var_1_20
 );
             if (var_1_22) {
              if ( ((var_1_17) < ( ((var_1_18) * (var_1_23))))) {
               if ( ((var_1_20) <= (var_1_19))) {
                var_1_21 = (
                 (((((( var_1_24 ) + ( var_1_25 ))) < 0 ) ? -((( var_1_24 ) + ( var_1_25 ))) : ((( var_1_24 ) + ( var_1_25 )))))
    );
   } else {
                if ( ((var_1_26) || (var_1_27))) {
                 var_1_21 = (
      var_1_25
     );
    }
   }
  }
 }
             if ( (( ((var_1_19) * ( ((var_1_28) & (var_1_30))))) <= ( ((var_1_29) | (1u))))) {
              var_1_32 = (
               ((((((((5) < 0 ) ? -(5) : (5)))) < 0 ) ? -(((((5) < 0 ) ? -(5) : (5)))) : (((((5) < 0 ) ? -(5) : (5))))))
  );
 }
             if ( ((var_1_34) <= (var_1_32))) {
              var_1_33 = (
   var_1_32
  );
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 16384);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= -2147483647);
 assume_abort_if_not(var_1_20 <= 2147483646);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 1);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= -63);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -63);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -128);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 16382);
 assume_abort_if_not(var_1_37 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 if ( ((var_1_6) > ( ((var_1_11) * (var_1_16))))) {
 } else {
  if ( ((var_1_6) < (2))) {
  } else {
   if ( ((var_1_6) < (var_1_11))) {
   } else {
   }
  }
 }
 if (var_1_7) {
  if ( ((var_1_8) && ( ((var_1_16) <= (var_1_11))))) {
  } else {
  }
 }
 if ( ((var_1_10) > ( ((var_1_5) + (last_1_var_1_12))))) {
  if ( (( (( (- (last_1_var_1_1))) < (last_1_var_1_16))) && (var_1_7))) {
   if ( ((var_1_10) <= (last_1_var_1_12))) {
   }
  } else {
  }
 } else {
 }
 if ( (( (((((last_1_var_1_13)) < ((last_1_var_1_11))) ? ((last_1_var_1_13)) : ((last_1_var_1_11))))) > ( (((((var_1_9)) > (( ((last_1_var_1_13) + (last_1_var_1_1))))) ? ((var_1_9)) : (( ((last_1_var_1_13) + (last_1_var_1_1))))))))) {
 } else {
 }
 if ( ((1) < (var_1_12))) {
 }
 if ( ((var_1_11) != (var_1_15))) {
  if ( (! ( ((last_1_var_1_16) != (var_1_12))))) {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                                         ((
                                              ((
       var_1_6
      ) > (
                                               ((
        var_1_11
       ) * (
        var_1_16
       ))
      ))
     ) ? (
                                          ((
       var_1_1
      ) == (
                                           ((unsigned char) (
                                            ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
       ))
      ))
     ) : (
                                          ((
                                                ((
        var_1_6
       ) < (
        2
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
         var_1_5
        ))
       ))
      ) : (
                                           ((
                                                 ((
         var_1_6
        ) < (
         var_1_11
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned char) (
          var_1_5
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned char) (
          25
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_7
     ) ? (
                                           ((
                                                ((
        var_1_8
       ) && (
                                                 ((
         var_1_16
        ) <= (
         var_1_11
        ))
       ))
      ) ? (
                                            ((
        var_1_6
       ) == (
                                             ((unsigned char) (
                                              ((
          128
         ) - (
                                               ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 ))))
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_6
       ) == (
                                             ((unsigned char) (
         var_1_10
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
      var_1_10
     ) > (
                                                            ((
       var_1_5
      ) + (
       last_1_var_1_12
      ))
     ))
    ) ? (
                                                     ((
                                                            ((
                                                             ((
                                                              (- (
         last_1_var_1_1
        ))
       ) < (
        last_1_var_1_16
       ))
      ) && (
       var_1_7
      ))
     ) ? (
                                                      ((
                                                             ((
        var_1_10
       ) <= (
        last_1_var_1_12
       ))
      ) ? (
                                                       ((
        var_1_11
       ) == (
                                                        ((unsigned short int) (
         var_1_10
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                                      ((
       var_1_11
      ) == (
                                                       ((unsigned short int) (
        var_1_9
       ))
      ))
     ))
    ) : (
                                                     ((
      var_1_11
     ) == (
                                                      ((unsigned short int) (
       var_1_5
      ))
     ))
    ))
   ))
  ) && (
                                                    ((
                                                           ((
                                                            ((((( last_1_var_1_13 )) < (( last_1_var_1_11 ))) ? (( last_1_var_1_13 )) : (( last_1_var_1_11 ))))
    ) > (
                                                            ((((( var_1_9 )) > (( (( last_1_var_1_13 ) + ( last_1_var_1_1 )) ))) ? (( var_1_9 )) : (( (( last_1_var_1_13 ) + ( last_1_var_1_1 )) ))))
    ))
   ) ? (
                                                     ((
     var_1_12
    ) == (
                                                      ((unsigned char) (
      var_1_5
     ))
    ))
   ) : (
                                                     ((
     var_1_12
    ) == (
                                                      ((unsigned char) (
      var_1_9
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    1
   ) < (
    var_1_12
   ))
  ) ? (
                                        ((
    var_1_13
   ) == (
                                         ((unsigned short int) (
                                          ((((( (( (( var_1_14 ) + ( var_1_15 )) ) - ( var_1_6 )) )) > (( 100 ))) ? (( (( (( var_1_14 ) + ( var_1_15 )) ) - ( var_1_6 )) )) : (( 100 ))))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_11
  ) != (
   var_1_15
  ))
 ) ? (
                                       ((
                                              (! (
                                               ((
     last_1_var_1_16
    ) != (
     var_1_12
    ))
   ))
  ) ? (
                                        ((
    var_1_16
   ) == (
                                         ((unsigned long int) (
     1000u
    ))
   ))
  ) : (
   1
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 10.8;
double var_1_4 = 5.5;
float var_1_5 = 49.2;
double var_1_6 = 15.1;
signed char var_1_7 = 4;
signed char var_1_8 = 32;
signed char var_1_9 = 2;
signed char var_1_10 = 2;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 1;
signed char var_1_17 = -2;
unsigned short int var_1_19 = 25;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 56857;
unsigned char var_1_22 = 0;
double var_1_23 = 1000000000.5;
double var_1_24 = 2.95;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 10;
float var_1_27 = 15.5;
unsigned char var_1_28 = 1;
float var_1_29 = 256.6;
signed short int var_1_30 = -2;
float var_1_31 = 7.5;
float var_1_32 = 128.5;
float var_1_33 = 10000000.5;
float var_1_34 = 10.5;
float var_1_35 = 64.25;
signed char var_1_36 = 1;
unsigned long int var_1_37 = 4;
unsigned long int var_1_38 = 4;
signed char var_1_39 = 25;
signed long int var_1_40 = 1;
unsigned char var_1_41 = 1;
signed short int var_1_42 = -32;
unsigned short int last_1_var_1_19 = 25;
unsigned char last_1_var_1_20 = 0;
void initially(void) {
}
void step(void) {
                                           if (last_1_var_1_20) {
                                           var_1_13 = (
                                            ((((( var_1_12 )) < (( var_1_15 ))) ? (( var_1_12 )) : (( var_1_15 ))))
  );
 } else {
                                            if (last_1_var_1_20) {
                                             var_1_13 = (
    var_1_12
   );
  }
 }
                                var_1_11 = (
                                 ((
   200
  ) - (
   var_1_12
  ))
 );
 unsigned char stepLocal_0 = var_1_13;
                               if ( ((stepLocal_0) == (var_1_11))) {
                                var_1_1 = (
                                 ((
    var_1_4
   ) - (
    4.531
   ))
  );
 } else {
                                if ( (( ((var_1_4) - (var_1_5))) > (var_1_6))) {
                                 var_1_1 = (
    var_1_4
   );
  } else {
                                 var_1_1 = (
    200.5
   );
  }
 }
                                if ( ((var_1_5) < (var_1_1))) {
                                 var_1_7 = (
                                  ((
                                  ((((( var_1_8 )) > (( -8 ))) ? (( var_1_8 )) : (( -8 ))))
   ) + (
                                   ((
                                    ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 ))))
    ) + (
     2
    ))
   ))
  );
 }
                                if ( ((var_1_14) || (var_1_16))) {
                                 if ( ((var_1_8) > (var_1_13))) {
                                  var_1_19 = (
                                   ((
                                    ((((( var_1_12 )) > (( var_1_15 ))) ? (( var_1_12 )) : (( var_1_15 ))))
    ) + (
     last_1_var_1_19
    ))
   );
  } else {
                                  var_1_19 = (
    var_1_11
   );
  }
 } else {
                                 var_1_19 = (
   var_1_11
  );
 }
                                if ( ((var_1_19) <= ( ((var_1_21) - ( (((((var_1_11)) > ((8))) ? ((var_1_11)) : ((8))))))))) {
                                 if (var_1_16) {
                                  var_1_20 = (
    var_1_22
   );
  }
 }
 signed long int stepLocal_1 = ((((( ((var_1_13) * (var_1_12)))) < ((var_1_11))) ? (( ((var_1_13) * (var_1_12)))) : ((var_1_11))));
                                if ( ((var_1_1) <= ( ((var_1_5) - (var_1_4))))) {
                                 var_1_17 = (
   var_1_9
  );
 } else {
                                 if ( (! (var_1_20))) {
                                  if ( ((var_1_11) > (stepLocal_1))) {
                                   var_1_17 = (
     var_1_10
    );
   } else {
                                   var_1_17 = (
                                    ((((( var_1_9 )) < (( var_1_8 ))) ? (( var_1_9 )) : (( var_1_8 ))))
    );
   }
  }
 }
                  var_1_23 = (
  var_1_24
 );
                  if ( ((var_1_24) <= (var_1_1))) {
                   var_1_25 = (
                    ((((( var_1_26 )) < (( ((((128) < 0 ) ? -(128) : (128))) ))) ? (( var_1_26 )) : (( ((((128) < 0 ) ? -(128) : (128))) ))))
  );
 }
                  if (var_1_20) {
                   if ( ((var_1_24) < (var_1_1))) {
                    var_1_27 = (
    var_1_29
   );
  } else {
                    var_1_27 = (
                     ((((( ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < 0 ) ? -(((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) )) > (( var_1_29 ))) ? (( ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < 0 ) ? -(((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))))) )) : (( var_1_29 ))))
   );
  }
 }
                   var_1_30 = (
  var_1_19
 );
                   if ( (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) > (var_1_26))) {
                    var_1_31 = (
                     ((
    var_1_32
   ) + (
                      ((
     var_1_33
    ) - (
     var_1_34
    ))
   ))
  );
 } else {
                    if ( ((0.8f) >= ( ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))))) {
                     if ( ((var_1_19) <= (var_1_26))) {
                      var_1_31 = (
                       ((
      var_1_33
     ) - (
                        ((
       var_1_34
      ) + (
       var_1_35
      ))
     ))
    );
   }
  }
 }
                   if ( (( ((var_1_19) % (var_1_38))) >= ( (((((var_1_26)) > ((var_1_37))) ? ((var_1_26)) : ((var_1_37))))))) {
                    if ( (( ((var_1_19) & (var_1_37))) <= (var_1_26))) {
                     if ( ((var_1_19) < (var_1_37))) {
                      var_1_36 = (
     var_1_39
    );
   }
  }
 }
                   if ( ((var_1_28) && (var_1_41))) {
                    var_1_40 = (
                     ((
    var_1_13
   ) - (
                      ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
   ))
  );
 } else {
                    var_1_40 = (
   -10
  );
 }
                   if ( (( ((var_1_38) ^ (var_1_40))) <= (var_1_26))) {
                    if (var_1_20) {
                     var_1_42 = (
    var_1_26
   );
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -63);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -31);
 assume_abort_if_not(var_1_9 <= 32);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -31);
 assume_abort_if_not(var_1_10 <= 32);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65535);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 4294967295);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967295);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_19 = var_1_19;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( ((var_1_13) == (var_1_11))) {
 } else {
  if ( (( ((var_1_4) - (var_1_5))) > (var_1_6))) {
  } else {
  }
 }
 if ( ((var_1_5) < (var_1_1))) {
 }
 if (last_1_var_1_20) {
 } else {
  if (last_1_var_1_20) {
  }
 }
 if ( ((var_1_1) <= ( ((var_1_5) - (var_1_4))))) {
 } else {
  if ( (! (var_1_20))) {
   if ( ((var_1_11) > ( ((((( ((var_1_13) * (var_1_12)))) < ((var_1_11))) ? (( ((var_1_13) * (var_1_12)))) : ((var_1_11))))))) {
   } else {
   }
  }
 }
 if ( ((var_1_14) || (var_1_16))) {
  if ( ((var_1_8) > (var_1_13))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_19) <= ( ((var_1_21) - ( (((((var_1_11)) > ((8))) ? ((var_1_11)) : ((8))))))))) {
  if (var_1_16) {
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
        var_1_13
       ) == (
        var_1_11
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
                                             ((
          var_1_4
         ) - (
          4.531
         ))
        ))
       ))
      ) : (
                                           ((
                                                 ((
                                                  ((
          var_1_4
         ) - (
          var_1_5
         ))
        ) > (
         var_1_6
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((double) (
          var_1_4
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((double) (
          200.5
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                ((
        var_1_5
       ) < (
        var_1_1
       ))
      ) ? (
                                            ((
        var_1_7
       ) == (
                                             ((signed char) (
                                              ((
                                              ((((( var_1_8 )) > (( -8 ))) ? (( var_1_8 )) : (( -8 ))))
         ) + (
                                               ((
                                                ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 ))))
          ) + (
           2
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
      var_1_11
     ) == (
                                           ((unsigned char) (
                                            ((
        200
       ) - (
        var_1_12
       ))
      ))
     ))
    ))
   ) && (
                                                    ((
     last_1_var_1_20
    ) ? (
                                                     ((
      var_1_13
     ) == (
                                                      ((unsigned char) (
                                                       ((((( var_1_12 )) < (( var_1_15 ))) ? (( var_1_12 )) : (( var_1_15 ))))
      ))
     ))
    ) : (
                                                     ((
      last_1_var_1_20
     ) ? (
                                                      ((
       var_1_13
      ) == (
                                                       ((unsigned char) (
        var_1_12
       ))
      ))
     ) : (
      1
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_1
    ) <= (
                                                ((
      var_1_5
     ) - (
      var_1_4
     ))
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((signed char) (
      var_1_9
     ))
    ))
   ) : (
                                         ((
                                                (! (
      var_1_20
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_11
      ) > (
                                                  ((((( (( var_1_13 ) * ( var_1_12 )) )) < (( var_1_11 ))) ? (( (( var_1_13 ) * ( var_1_12 )) )) : (( var_1_11 ))))
      ))
     ) ? (
                                           ((
       var_1_17
      ) == (
                                            ((signed char) (
        var_1_10
       ))
      ))
     ) : (
                                           ((
       var_1_17
      ) == (
                                            ((signed char) (
                                             ((((( var_1_9 )) < (( var_1_8 ))) ? (( var_1_9 )) : (( var_1_8 ))))
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_14
   ) || (
    var_1_16
   ))
  ) ? (
                                        ((
                                               ((
     var_1_8
    ) > (
     var_1_13
    ))
   ) ? (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned short int) (
                                           ((
                                            ((((( var_1_12 )) > (( var_1_15 ))) ? (( var_1_12 )) : (( var_1_15 ))))
      ) + (
       last_1_var_1_19
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned short int) (
      var_1_11
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_19
   ) == (
                                         ((unsigned short int) (
     var_1_11
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_19
  ) <= (
                                              ((
    var_1_21
   ) - (
                                               ((((( var_1_11 )) > (( 8 ))) ? (( var_1_11 )) : (( 8 ))))
   ))
  ))
 ) ? (
                                       ((
   var_1_16
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned char) (
     var_1_22
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

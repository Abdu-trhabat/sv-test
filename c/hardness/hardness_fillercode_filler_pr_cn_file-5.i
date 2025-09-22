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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;
signed long int var_1_22 = -32;
unsigned short int var_1_23 = 10;
unsigned short int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed char var_1_26 = 16;
signed char var_1_27 = 1;
unsigned long int var_1_28 = 32;
double var_1_29 = 8.9;
signed short int var_1_30 = 5;
double var_1_31 = 63.7;
unsigned long int var_1_32 = 4;
unsigned char var_1_33 = 0;
float var_1_34 = 31.25;
unsigned char var_1_35 = 1;
float var_1_36 = 7.8;
float var_1_37 = 16.2;
float var_1_38 = 4.5;
double var_1_39 = 7.4;
double var_1_40 = 0.5;
double var_1_41 = 128.6;
double var_1_42 = 256.25;
double var_1_43 = 2.25;
signed long int var_1_44 = 25;
unsigned long int last_1_var_1_6 = 5;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (((((last_1_var_1_6)) > ((var_1_4))) ? ((last_1_var_1_6)) : ((var_1_4))));
                                          if ( (( ((((last_1_var_1_6) < 0 ) ? -(last_1_var_1_6) : (last_1_var_1_6)))) <= (stepLocal_0))) {
                                           var_1_12 = (
                                            ((
                                             ((
     var_1_14
    ) - (
     var_1_5
    ))
   ) + (
                                             ((((last_1_var_1_6) < 0 ) ? -(last_1_var_1_6) : (last_1_var_1_6)))
   ))
  );
 } else {
                                           var_1_12 = (
   last_1_var_1_6
  );
 }
 signed long int stepLocal_1 = (~ ( ((var_1_5) * (var_1_12))));
                               if ( ((stepLocal_1) <= (var_1_12))) {
                                var_1_15 = (
                                 ((((( (( 5.25 ) - ( var_1_16 )) )) > (( var_1_17 ))) ? (( (( 5.25 ) - ( var_1_16 )) )) : (( var_1_17 ))))
  );
 } else {
                                var_1_15 = (
                                 ((((( ((((( var_1_17 )) < (( var_1_16 ))) ? (( var_1_17 )) : (( var_1_16 )))) )) < (( var_1_18 ))) ? (( ((((( var_1_17 )) < (( var_1_16 ))) ? (( var_1_17 )) : (( var_1_16 )))) )) : (( var_1_18 ))))
  );
 }
             if ( ((var_1_29) == ( (((((32.5)) < ((var_1_31))) ? ((32.5)) : ((var_1_31))))))) {
              var_1_30 = (
   var_1_27
  );
 } else {
              if ( ((var_1_23) < (var_1_22))) {
               if ( ((var_1_27) < (var_1_25))) {
                var_1_30 = (
     var_1_27
    );
   } else {
                var_1_30 = (
     var_1_26
    );
   }
  }
 }
                              if ( ((var_1_12) > (var_1_4))) {
                               if ( (( (- (var_1_15))) < (var_1_15))) {
                                var_1_6 = (
    10u
   );
  }
 }
             if ( ((-256) < ( ((var_1_24) * (10))))) {
              if ( ((var_1_29) >= (var_1_38))) {
               var_1_39 = (
                ((
                 ((((( ((((( var_1_40 )) < (( var_1_41 ))) ? (( var_1_40 )) : (( var_1_41 )))) )) > (( var_1_42 ))) ? (( ((((( var_1_40 )) < (( var_1_41 ))) ? (( var_1_40 )) : (( var_1_41 )))) )) : (( var_1_42 ))))
    ) - (
     var_1_43
    ))
   );
  }
 } else {
              var_1_39 = (
   var_1_38
  );
 }
                               var_1_21 = (
  var_1_10
 );
             if ( ((8.4) <= (var_1_29))) {
              var_1_28 = (
               ((((((((( var_1_23 )) < (( var_1_24 ))) ? (( var_1_23 )) : (( var_1_24 ))))) < 0 ) ? -(((((( var_1_23 )) < (( var_1_24 ))) ? (( var_1_23 )) : (( var_1_24 ))))) : (((((( var_1_23 )) < (( var_1_24 ))) ? (( var_1_23 )) : (( var_1_24 )))))))
  );
 } else {
              var_1_28 = (
               ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))
  );
 }
                              if ( (( (( (- (64))) + (var_1_6))) == (var_1_6))) {
                               var_1_1 = (
                                ((
                                 ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
   ) - (
    var_1_5
   ))
  );
 } else {
                               var_1_1 = (
                                ((
                                 ((((( 128 )) < (( var_1_4 ))) ? (( 128 )) : (( var_1_4 ))))
   ) - (
    64
   ))
  );
 }
            if ( ((var_1_23) <= ( (( (((((var_1_24)) < ((var_1_25))) ? ((var_1_24)) : ((var_1_25))))) >> ( ((var_1_26) - (var_1_27))))))) {
             var_1_22 = (
              ((((( var_1_25 )) > (( var_1_24 ))) ? (( var_1_25 )) : (( var_1_24 ))))
  );
 } else {
             var_1_22 = (
   var_1_25
  );
 }
                               if ( ((var_1_5) == ( ((var_1_6) / (var_1_4))))) {
                                var_1_9 = (
                                 ((((( var_1_5 )) < (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))) ? (( var_1_5 )) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))))
  );
 } else {
                                var_1_9 = (
                                 ((
                                  ((
     var_1_10
    ) + (
     var_1_11
    ))
   ) - (
    var_1_5
   ))
  );
 }
             if (var_1_33) {
              var_1_32 = (
               (((((( var_1_23 ) + ( var_1_25 ))) < 0 ) ? -((( var_1_23 ) + ( var_1_25 ))) : ((( var_1_23 ) + ( var_1_25 )))))
  );
 }
             var_1_44 = (
  var_1_24
 );
 unsigned long int stepLocal_3 = var_1_6;
 unsigned char stepLocal_2 = var_1_4;
                               if ( ((stepLocal_2) < (var_1_6))) {
                                if ( ((stepLocal_3) > (var_1_12))) {
                                 var_1_19 = (
    var_1_20
   );
  }
 }
             if (var_1_33) {
              if (var_1_35) {
               if ( ((var_1_30) > (var_1_25))) {
                var_1_34 = (
                 ((
      9.5f
     ) + (
      128.5f
     ))
    );
   }
  } else {
               var_1_34 = (
                ((((( ((((((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))) < 0 ) ? -(((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))) : (((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))))) )) < (( var_1_38 ))) ? (( ((((((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))) < 0 ) ? -(((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))) : (((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))))) )) : (( var_1_38 ))))
   );
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 64);
 assume_abort_if_not(var_1_11 <= 127);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 16383);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 0);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 65535);
 var_1_24 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 65535);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 65535);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= 15);
 assume_abort_if_not(var_1_26 <= 30);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 14);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
}
int property(void) {
 if ( (( (( (- (64))) + (var_1_6))) == (var_1_6))) {
 } else {
 }
 if ( ((var_1_12) > (var_1_4))) {
  if ( (( (- (var_1_15))) < (var_1_15))) {
  }
 }
 if ( ((var_1_5) == ( ((var_1_6) / (var_1_4))))) {
 } else {
 }
 if ( (( ((((last_1_var_1_6) < 0 ) ? -(last_1_var_1_6) : (last_1_var_1_6)))) <= ( (((((last_1_var_1_6)) > ((var_1_4))) ? ((last_1_var_1_6)) : ((var_1_4))))))) {
 } else {
 }
 if ( (( (~ ( ((var_1_5) * (var_1_12))))) <= (var_1_12))) {
 } else {
 }
 if ( ((var_1_4) < (var_1_6))) {
  if ( ((var_1_6) > (var_1_12))) {
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
                                                (- (
          64
         ))
        ) + (
         var_1_6
        ))
       ) == (
        var_1_6
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned char) (
                                            ((
                                             ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
         ) - (
          var_1_5
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((
                                              ((((( 128 )) < (( var_1_4 ))) ? (( 128 )) : (( var_1_4 ))))
         ) - (
          64
         ))
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_12
       ) > (
        var_1_4
       ))
      ) ? (
                                           ((
                                                 ((
                                                  (- (
          var_1_15
         ))
        ) < (
         var_1_15
        ))
       ) ? (
                                            ((
         var_1_6
        ) == (
                                             ((unsigned long int) (
          10u
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
                                               ((
       var_1_5
      ) == (
                                                ((
        var_1_6
       ) / (
        var_1_4
       ))
      ))
     ) ? (
                                           ((
       var_1_9
      ) == (
                                            ((unsigned char) (
                                             ((((( var_1_5 )) < (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))) ? (( var_1_5 )) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))))
       ))
      ))
     ) : (
                                           ((
       var_1_9
      ) == (
                                            ((unsigned char) (
                                             ((
                                              ((
          var_1_10
         ) + (
          var_1_11
         ))
        ) - (
         var_1_5
        ))
       ))
      ))
     ))
    ))
   ) && (
                                                    ((
                                                           ((
                                                            ((((last_1_var_1_6) < 0 ) ? -(last_1_var_1_6) : (last_1_var_1_6)))
     ) <= (
                                                            ((((( last_1_var_1_6 )) > (( var_1_4 ))) ? (( last_1_var_1_6 )) : (( var_1_4 ))))
     ))
    ) ? (
                                                     ((
      var_1_12
     ) == (
                                                      ((unsigned short int) (
                                                       ((
                                                        ((
         var_1_14
        ) - (
         var_1_5
        ))
       ) + (
                                                        ((((last_1_var_1_6) < 0 ) ? -(last_1_var_1_6) : (last_1_var_1_6)))
       ))
      ))
     ))
    ) : (
                                                     ((
      var_1_12
     ) == (
                                                      ((unsigned short int) (
       last_1_var_1_6
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                (~ (
                                                 ((
       var_1_5
      ) * (
       var_1_12
      ))
     ))
    ) <= (
     var_1_12
    ))
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((double) (
                                           ((((( (( 5.25 ) - ( var_1_16 )) )) > (( var_1_17 ))) ? (( (( 5.25 ) - ( var_1_16 )) )) : (( var_1_17 ))))
     ))
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((double) (
                                           ((((( ((((( var_1_17 )) < (( var_1_16 ))) ? (( var_1_17 )) : (( var_1_16 )))) )) < (( var_1_18 ))) ? (( ((((( var_1_17 )) < (( var_1_16 ))) ? (( var_1_17 )) : (( var_1_16 )))) )) : (( var_1_18 ))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_4
   ) < (
    var_1_6
   ))
  ) ? (
                                        ((
                                               ((
     var_1_6
    ) > (
     var_1_12
    ))
   ) ? (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned char) (
      var_1_20
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
  var_1_21
 ) == (
                                       ((signed short int) (
   var_1_10
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

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char var_1_3 = 16;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
signed long int var_1_14 = -8;
unsigned long int var_1_15 = 128;
unsigned long int var_1_17 = 5;
unsigned short int var_1_18 = 32;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
unsigned char var_1_22 = 0;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 5;
signed char var_1_26 = 10;
signed char var_1_27 = 50;
unsigned long int var_1_28 = 128;
signed short int var_1_29 = 5;
unsigned short int var_1_30 = 4;
float var_1_32 = 32.625;
float var_1_33 = 200.75;
float var_1_34 = -0.25;
signed short int var_1_35 = 32;
signed short int var_1_36 = 128;
unsigned char var_1_37 = 1;
unsigned long int var_1_38 = 128;
unsigned char var_1_39 = 0;
unsigned char last_1_var_1_1 = 0;
unsigned char last_1_var_1_10 = 0;
signed long int last_1_var_1_14 = -8;
unsigned long int last_1_var_1_17 = 5;
unsigned short int last_1_var_1_18 = 32;
unsigned char last_1_var_1_19 = 1;
void initially(void) {
}
void step(void) {
                   if ( ((256) != (var_1_14))) {
                    var_1_20 = (
                     ((
                      (! (
     1
    ))
   ) || (
    var_1_22
   ))
  );
 }
                   if ( (( ((var_1_17) / (var_1_24))) <= (var_1_15))) {
                    if ( (( (~ ( ((var_1_26) - (var_1_27))))) < (var_1_17))) {
                     if ( (( ((var_1_24) <= ( ((var_1_27) % (var_1_28))))) || (var_1_10))) {
                      if ( ((var_1_10) && (var_1_22))) {
                       var_1_23 = (
      var_1_27
     );
    }
   }
  }
 } else {
                    var_1_23 = (
   var_1_27
  );
 }
                   if ( ((var_1_14) < ( ((((( ((var_1_27) >> (var_1_30)))) < ((var_1_24))) ? (( ((var_1_27) >> (var_1_30)))) : ((var_1_24))))))) {
                    if ( ((var_1_22) || ( ((var_1_19) && (var_1_10))))) {
                     var_1_29 = (
                      ((
     var_1_26
    ) - (
     var_1_30
    ))
   );
  } else {
                     var_1_29 = (
                      ((((( var_1_30 )) > (( var_1_27 ))) ? (( var_1_30 )) : (( var_1_27 ))))
   );
  }
 }
                   if ( ((var_1_27) < (var_1_17))) {
                    if ( (( ((var_1_27) >= (var_1_30))) && ( ((var_1_15) <= ( ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))))))) {
                     var_1_32 = (
    var_1_33
   );
  }
 } else {
                    var_1_32 = (
   var_1_34
  );
 }
                   if (var_1_10) {
                    if (var_1_22) {
                     var_1_35 = (
    var_1_27
   );
  }
 }
                   var_1_36 = (
                    ((
                     ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
  ) - (
   var_1_30
  ))
 );
                   if ( ((var_1_28) != ( ((256u) % (var_1_38))))) {
                    var_1_37 = (
   var_1_39
  );
 }
 unsigned long int stepLocal_2 = ((last_1_var_1_18) + (last_1_var_1_17));
                                              if ( ((stepLocal_2) < (1))) {
                                                if (var_1_12) {
                                                 if (last_1_var_1_10) {
                                                  var_1_19 = (
     var_1_11
    );
   }
  }
 }
                                           if ( (( ((last_1_var_1_17) / (var_1_3))) <= (2))) {
                                            if ( ((var_1_3) < ( ((((( (~ (last_1_var_1_17)))) < ((last_1_var_1_14))) ? (( (~ (last_1_var_1_17)))) : ((last_1_var_1_14))))))) {
                                             var_1_1 = (
                                              ((((( var_1_5 )) < (( 16 ))) ? (( var_1_5 )) : (( 16 ))))
   );
  } else {
                                             if ( (( (( ((var_1_6) || (var_1_7))) && (var_1_8))) || (var_1_9))) {
                                              var_1_1 = (
     var_1_5
    );
   } else {
                                              var_1_1 = (
     32
    );
   }
  }
 } else {
                                            var_1_1 = (
   var_1_5
  );
 }
 unsigned char stepLocal_0 = var_1_5;
                                if ( ((stepLocal_0) >= (var_1_3))) {
                                 var_1_14 = (
                                  ((((( last_1_var_1_14 )) < (( var_1_1 ))) ? (( last_1_var_1_14 )) : (( var_1_1 ))))
  );
 } else {
                                 var_1_14 = (
                                  ((
    32
   ) + (
    var_1_1
   ))
  );
 }
                                var_1_18 = (
  var_1_1
 );
                                       if ( ((last_1_var_1_1) <= (var_1_5))) {
                                        var_1_10 = (
                                         ((
    last_1_var_1_19
   ) || (
                                          ((
                                           ((
      var_1_3
     ) != (
      var_1_5
     ))
    ) || (
     var_1_11
    ))
   ))
  );
 } else {
                                        var_1_10 = (
                                         ((
    var_1_12
   ) || (
    var_1_13
   ))
  );
 }
                                if ( ((var_1_14) < ( ((32) / (var_1_3))))) {
                                 if ( ((var_1_10) || (var_1_19))) {
                                  var_1_17 = (
    var_1_18
   );
  }
 }
 unsigned char stepLocal_1 = var_1_10;
                                if ( ((stepLocal_1) || ( (( (((((var_1_14)) > ((var_1_3))) ? ((var_1_14)) : ((var_1_3))))) < ( (((((var_1_17)) < ((var_1_18))) ? ((var_1_17)) : ((var_1_18))))))))) {
                                 var_1_15 = (
                                  ((((( 1u )) > (( var_1_17 ))) ? (( 1u )) : (( var_1_17 ))))
  );
 } else {
                                 var_1_15 = (
   32u
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 254);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 4294967295);
 assume_abort_if_not(var_1_24 != 0);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -1);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 4294967295);
 assume_abort_if_not(var_1_28 != 0);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 6);
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967295);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_18 = var_1_18;
 last_1_var_1_19 = var_1_19;
}
int property(void) {
 if ( (( ((last_1_var_1_17) / (var_1_3))) <= (2))) {
  if ( ((var_1_3) < ( ((((( (~ (last_1_var_1_17)))) < ((last_1_var_1_14))) ? (( (~ (last_1_var_1_17)))) : ((last_1_var_1_14))))))) {
  } else {
   if ( (( (( ((var_1_6) || (var_1_7))) && (var_1_8))) || (var_1_9))) {
   } else {
   }
  }
 } else {
 }
 if ( ((last_1_var_1_1) <= (var_1_5))) {
 } else {
 }
 if ( ((var_1_5) >= (var_1_3))) {
 } else {
 }
 if ( ((var_1_10) || ( (( (((((var_1_14)) > ((var_1_3))) ? ((var_1_14)) : ((var_1_3))))) < ( (((((var_1_17)) < ((var_1_18))) ? ((var_1_17)) : ((var_1_18))))))))) {
 } else {
 }
 if ( ((var_1_14) < ( ((32) / (var_1_3))))) {
  if ( ((var_1_10) || (var_1_19))) {
  }
 }
 if ( (( ((last_1_var_1_18) + (last_1_var_1_17))) < (1))) {
  if (var_1_12) {
   if (last_1_var_1_10) {
   }
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
         last_1_var_1_17
        ) / (
         var_1_3
        ))
       ) <= (
        2
       ))
      ) ? (
                                                       ((
                                                             ((
         var_1_3
        ) < (
                                                              ((((( (~ ( last_1_var_1_17 )) )) < (( last_1_var_1_14 ))) ? (( (~ ( last_1_var_1_17 )) )) : (( last_1_var_1_14 ))))
        ))
       ) ? (
                                                        ((
         var_1_1
        ) == (
                                                         ((unsigned char) (
                                                          ((((( var_1_5 )) < (( 16 ))) ? (( var_1_5 )) : (( 16 ))))
         ))
        ))
       ) : (
                                                        ((
                                                              ((
                                                               ((
                                                                ((
            var_1_6
           ) || (
            var_1_7
           ))
          ) && (
           var_1_8
          ))
         ) || (
          var_1_9
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
           32
          ))
         ))
        ))
       ))
      ) : (
                                                       ((
        var_1_1
       ) == (
                                                        ((unsigned char) (
         var_1_5
        ))
       ))
      ))
     ) && (
                                                  ((
                                                        ((
        last_1_var_1_1
       ) <= (
        var_1_5
       ))
      ) ? (
                                                   ((
        var_1_10
       ) == (
                                                    ((unsigned char) (
                                                     ((
          last_1_var_1_19
         ) || (
                                                      ((
                                                       ((
            var_1_3
           ) != (
            var_1_5
           ))
          ) || (
           var_1_11
          ))
         ))
        ))
       ))
      ) : (
                                                   ((
        var_1_10
       ) == (
                                                    ((unsigned char) (
                                                     ((
          var_1_12
         ) || (
          var_1_13
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_5
      ) >= (
       var_1_3
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed long int) (
                                             ((((( last_1_var_1_14 )) < (( var_1_1 ))) ? (( last_1_var_1_14 )) : (( var_1_1 ))))
       ))
      ))
     ) : (
                                           ((
       var_1_14
      ) == (
                                            ((signed long int) (
                                             ((
         32
        ) + (
         var_1_1
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_10
     ) || (
                                                 ((
                                                  ((((( var_1_14 )) > (( var_1_3 ))) ? (( var_1_14 )) : (( var_1_3 ))))
      ) < (
                                                  ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned long int) (
                                            ((((( 1u )) > (( var_1_17 ))) ? (( 1u )) : (( var_1_17 ))))
      ))
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned long int) (
       32u
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_14
    ) < (
                                                ((
      32
     ) / (
      var_1_3
     ))
    ))
   ) ? (
                                         ((
                                                ((
      var_1_10
     ) || (
      var_1_19
     ))
    ) ? (
                                          ((
      var_1_17
     ) == (
                                           ((unsigned long int) (
       var_1_18
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
   var_1_18
  ) == (
                                        ((unsigned short int) (
    var_1_1
   ))
  ))
 ))
) && (
                                                     ((
                                                            ((
                                                             ((
    last_1_var_1_18
   ) + (
    last_1_var_1_17
   ))
  ) < (
   1
  ))
 ) ? (
                                                      ((
   var_1_12
  ) ? (
                                                       ((
    last_1_var_1_10
   ) ? (
                                                        ((
     var_1_19
    ) == (
                                                         ((unsigned char) (
      var_1_11
     ))
    ))
   ) : (
    1
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

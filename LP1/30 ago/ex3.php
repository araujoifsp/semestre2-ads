<?php
    $f = 3;
    $i;
    $result = 0;
    for($i=$f;$i>0;$i--){
       if($result == 0){
            $result = $i;
        }
        else{
            $result = $result * $i;
        }
    }
    echo ($result);

?>
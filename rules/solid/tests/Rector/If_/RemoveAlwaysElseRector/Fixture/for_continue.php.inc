<?php

namespace Rector\SOLID\Tests\Rector\If_\RemoveAlwaysElse\Fixture;

class ForContinue
{
    public function run($values)
    {
        foreach ($values as $value) {
            if ($value) {
                continue;
            } else {
                echo '111';
            }
        }
    }

    public function run2($values)
    {
        for ($i = 0; count($values) < $i; $i++) {
            $value = $values[$i];

            if ($value) {
                continue;
            } else {
                echo '111';
            }
        }
    }
}

?>
-----
<?php

namespace Rector\SOLID\Tests\Rector\If_\RemoveAlwaysElse\Fixture;

class ForContinue
{
    public function run($values)
    {
        foreach ($values as $value) {
            if ($value) {
                continue;
            }
            echo '111';
        }
    }

    public function run2($values)
    {
        for ($i = 0; count($values) < $i; $i++) {
            $value = $values[$i];

            if ($value) {
                continue;
            }
            echo '111';
        }
    }
}

?>

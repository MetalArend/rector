<?php

declare(strict_types=1);

namespace Rector\BetterPhpDocParser\Attributes\Ast\PhpDoc;

use PHPStan\PhpDocParser\Ast\PhpDoc\TemplateTagValueNode;
use Rector\BetterPhpDocParser\Attributes\Attribute\AttributeTrait;
use Rector\BetterPhpDocParser\Contract\PhpDocNode\AttributeAwareNodeInterface;

final class AttributeAwareTemplateTagValueNode extends TemplateTagValueNode implements AttributeAwareNodeInterface
{
    use AttributeTrait;
}

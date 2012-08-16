
// Implementation #1
function stripTags(html) {
    var strip = html.replace(/<\w+(\s+("[^"]*"|'[^']*'|[^>])+)?>|<\/\w+>/gi, '');
    return strip; // yes I know I could have done it in one line
}


// Implementation #2
function stripTags(html) {
    var strip = html.replace(/<\w+(\s+("[^"]*"|'[^']*'|[^>])+)?>|<\/\w+>/gi, '');
    return strip.replace(/&lt;/g,'<').replace(/&gt;/g,'>').replace(/&amp;/g,'&');
}


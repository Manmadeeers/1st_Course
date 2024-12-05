<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="/">
<html>
<body>
<head><title>Аттестация</title>
</head>
<table border="1">
<tr>
<th>ФИО</th>
<th>Оценка</th>
</tr>
<xsl:for-each select="attest/line">
<xsl:sort select="name"/>
<tr>
<td><xsl:value-of select="name"/></td>
<xsl:choose>
<xsl:when test="mark &gt;8">
<td bgcolor="green"><xsl:value-of select="mark"/></td>
</xsl:when>
<xsl:when test="mark &lt;5">
<td bgcolor="red"><xsl:value-of select="mark"/></td>
</xsl:when>
<xsl:otherwise>
<td><xsl:value-of select="mark"/></td>
</xsl:otherwise>
</xsl:choose>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>
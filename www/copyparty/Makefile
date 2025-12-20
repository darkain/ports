PORTNAME=			copyparty
DISTVERSIONPREFIX=	v
DISTVERSION=		1.19.23
CATEGORIES=			www
MASTER_SITES=		https://github.com/9001/${PORTNAME}/releases/download/${DISTVERSIONPREFIX}${DISTVERSION}/
DISTNAME=			${PORTNAME}-sfx.py
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=			ports@darkain.com
COMMENT=			File server with resumable uploads/downloads
WWW=				https://github.com/9001/copyparty

LICENSE=			MIT

RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR}

USES=				python:run,run shebangfix
USE_RC_SUBR=		${PORTNAME}

SHEBANG_FILES=		${PORTNAME}-sfx.py

NO_BUILD=			yes
NO_ARCH=			yes
NO_WRKSUBDIR=		yes

USERS=				${PORTNAME}
GROUPS=				${PORTNAME}

SUB_LIST=			PYTHON_CMD=${PYTHON_CMD}

UID_FILES=			${FILESDIR}/${PORTNAME}-users
GID_FILES=			${FILESDIR}/${PORTNAME}-groups

post-extract:
	${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}/${SHEBANG_FILES}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${SHEBANG_FILES} ${STAGEDIR}${PREFIX}/bin

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc
	${INSTALL_DATA} ${FILESDIR}/copyparty.conf.sample ${STAGEDIR}${PREFIX}/etc/

	${MKDIR} ${STAGEDIR}/var/db/copyparty
	${MKDIR} ${STAGEDIR}/var/log/copyparty
	${MKDIR} ${STAGEDIR}/var/run/copyparty

.include <bsd.port.mk>
